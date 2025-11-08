// readline 모듈 불러오기
const readline = require('readline')

// readline 인터페이스 생성
const rl = readline.createInterface({
    input: process.stdin    // 표준 입력
  , output: process.stdout  // 표준 출력
})

// 입력값을 저장할 배열
let input = []

// 입력 라인 처리
rl.on('line', function(line)
{
    // 입력받은 한 줄을 배열에 저장
    input = [line]
})

// 입력 종료 후 처리
rl.on('close', function()
{
    // 배열에서 문자열 꺼내기
    let str = input[0]

    // 문자열 그대로 출력
    console.log(str)
})