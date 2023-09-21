# SFML 라이브러리 설치

## 웹사이트
https://www.sfml-dev.org/download/sfml/2.6.0/

## 다운로드
- C++ 17 : 2022 / 32비트

## 폴더 구조

```
- SimpleGame - External - include 
                        - lib
             - SimpleGame
             - SimpleGame.sln
```

- SFML > include 전체 파일/폴더 => SimpleGame > External > include 
- SFML > lib 전체 파일/폴더 => SimpleGame > External > lib 
- SFML > bin 전체 파일 => SimpleGame > SimpleGame 

# VS 2022 환경 설정 

- Solution Explorer > Drop Down Menu > Properies 
- 상단 공통 영역
    - Configuration > All Configuration
    - Platform > win32
- C/C++ > Genaral > Aditional include Directories
    - SFML에서 복사해온 파일/폴더가 있는 위치(폴더)를 선택
    - $(SolutionDir) : 현재 프로젝트 폴더

- Linker > General > Additional Library Directories
    - SFML에서 복사해온 파일/폴더가 있는 위치(폴더)를 선택

- Linker > Input > additional Dependancies 
    - Configuration > Release

```
  sfml-system.lib 
  sfml-graphic.lib 
  sfml-window.lib 
  sfml-audio.lib 
  sfml-network.lib 
```

- Linker > Input > additional Dependancies
   - Counfiguration > Debug

```
  sfml-system.lib 
  sfml-graphic.lib 
  sfml-window.lib 
  sfml-audio.lib 
  sfml-network.lib 
```


