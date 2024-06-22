# Fire-Attack-Robots-using-Fire-Hydrant (2023.03 ~ 2023.12)


## 1. 개발 배경 및 목적 : 옥내 소화전을 이용한 화재 초기 진압 모빌리티

  - 실내 화재 피해액은 지난 2016년 약 1천 6백억에서 2021년 약 4천 7백억으로 약 2.9배 증가율을 보였고 실내 화재 피해 금액은 매년 증가하는 추세 입니다. 
  
  - 실내 화재의 초기 진압에서 기존의 소방체제는 실내 화재를 신속하고 정확하게 끌 수 있는 대응 장치부족 합니다. 
  
  - 따라서 본 프로젝트를 통해 기존의 소방 로봇의 단점을 보완하는 옥내 소화전을 사용한 자율주행 화재 초기 진압 Mobility를 개발하였습니다.



## 2. 프로젝트 개요 :
  
  ### 목표 수준
    -  화재 인식 및 실시간 상황 정보 전달
    -  옥내 소화전으로 실내 화재 초기 진압
    -  실내 화재 발생 지역까지 자율주행
  
  ### 기능 정의
    - 사람 및 화재 객체 판단 기능
    - 캐터필러를 이용한 실내 자율주행
    - 4-axis Manipulator로 관창 제어 
    - 화재 감지 및 소화전 문 및 밸브 개방 제어
    - 안정적인 전력 공급을 위한 회로 부품 설계
  
  ### 팀원 역할
  <img width="337" alt="역할" src="https://github.com/Baby-Blowfish/Initial-Fire-Attack-Robots-using-Fire-Hydrant/assets/168509536/30204cd3-8f68-404c-b17d-ef990e549e62">

  ### 기술 스택
<img width="440" alt="스크린샷 2024-05-08 165016" src="https://github.com/Baby-Blowfish/Initial-Fire-Attack-Robots-using-Fire-Hydrant/assets/168509536/5bc23cc5-38df-49a4-937e-33516c939d4c">


  ### 수행 일정
  <img width="337" alt="화면 캡처 2024-06-22 163315" src="https://github.com/Baby-Blowfish/Initial-Fire-Attack-Robots-using-Fire-Hydrant/assets/168509536/c718252d-7fb9-4246-929a-c7b88b28565e">



## 3. 프로젝트 내 역할 
  - Bluetooth 통신으로 모빌리티에 방수 신호를 전달 및 처리하여 소화전 문 및 밸브 개발 모듈 개발
  - 로봇의 Li Po 4s, BMS, DC/DC 컨버터로 전원회로 설계
  - JetsonNano에 ROS환경 구성, 2륜 궤도형 로봇에 UART 통신으로 Teleoperation 개발
  - 2륜 궤도형 Encoder DC 모터의 PID 제어 및 Odometry 정보와 IMU센서로 이동정보로 LiDAR기반 SLAM, Navigation 개발



## 4. 성과
  - 2023 창의적 종합 설계 경진대회에서 산업통상자원부 장관상(최우수상)을 수상

## 5. 영상    
  https://www.youtube.com/watch?v=NFN3SeLfSok
