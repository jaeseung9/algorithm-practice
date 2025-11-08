#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 상하좌우 이동을 위한 방향 배열
int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};

// 전역 변수
int n, m;
bool visited[500][500]; // 방문 여부 체크 배열
int oil_size[250000];   // 각 석유 덩어리의 크기를 저장하는 배열
int oil_map[500][500];  // 석유 덩어리 번호를 저장하는 배열
int oil_id = 0;         // 석유 덩어리 번호

// DFS를 사용해 석유 덩어리의 크기를 계산
int dfs(int** land, int x, int y) {
    visited[x][y] = true;
    oil_map[x][y] = oil_id;
    int size = 1; // 현재 칸도 석유 덩어리의 일부이므로 크기는 1

    for (int i = 0; i < 4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if (nx >= 0 && nx < n && ny >= 0 && ny < m && land[nx][ny] == 1 && !visited[nx][ny]) {
            size += dfs(land, nx, ny);
        }
    }

    return size;
}

int solution(int** land, size_t land_rows, size_t land_cols) {
    n = land_rows;
    m = land_cols;
    
    // 방문 배열 초기화
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            visited[i][j] = false;
            oil_map[i][j] = -1;
        }
    }

    // 각 석유 덩어리의 크기를 DFS로 계산하여 저장
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (land[i][j] == 1 && !visited[i][j]) {
                oil_size[oil_id] = dfs(land, i, j);
                oil_id++;
            }
        }
    }

    int max_oil = 0;

    // 각 열을 기준으로 시추관이 뽑을 수 있는 석유량을 계산
    for (int j = 0; j < m; j++) {
        int current_oil = 0;
        bool counted[250000] = {false}; // 이미 더한 석유 덩어리를 중복 계산하지 않도록 체크
        
        for (int i = 0; i < n; i++) {
            int id = oil_map[i][j];
            if (id != -1 && !counted[id]) { // 석유 덩어리가 있고, 아직 더하지 않았다면
                current_oil += oil_size[id];
                counted[id] = true; // 해당 덩어리를 계산했음을 표시
            }
        }

        // 가장 많은 석유를 뽑을 수 있는 양 갱신
        if (current_oil > max_oil) {
            max_oil = current_oil;
        }
    }

    return max_oil;
}