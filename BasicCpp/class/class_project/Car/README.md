## 자동차로 보는 클래스들
____
### C++파일 분할법
- **헤더파일 - 클래스의 멤버변수 및 메서드 선언 확장자는 .h**   
- **Cpp파일 - 클래스의 생성자 및 메서드 구현 확장자는 .cpp**
___
### 헤더파일에 선언한 멤버변수 및 메서드는 다음과 같음
1. 멤버변수
- name: 이름
- fuel: 연료통
- power: 시동여부(true = on, false = off)
2. 메서드
- void PowerOn() = 시동시작
- void PowerOff() = 시동끄기