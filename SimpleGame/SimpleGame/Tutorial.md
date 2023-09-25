# Youtube Reference
https://www.youtube.com/watch?v=KRGPNi9mEMo&list=PL6xSOsbVA1eb_QqMTTcql_3PdOiE928up&index=2

# SFML ���̺귯�� ��ġ

## ������Ʈ 
https://www.sfml-dev.org/download/sfml/2.6.0/

## �ٿ�ε�
- C++ 17 : 2022 / 32��Ʈ

## ���� ����

```
- SimpleGame - External - include 
                        - lib
             - SimpleGame
             - SimpleGame.sln
```

- SFML > include ��ü ����/���� => SimpleGame > External > include 
- SFML > lib ��ü ����/���� => SimpleGame > External > lib 
- SFML > bin ��ü ���� => SimpleGame > SimpleGame 

# VS 2022 ȯ�� ���� 

- VS 2022 ������ ��� ���� > Solutio Platform > x86���� ����
- Solution Explorer > Drop Down Menu > Properies 
- ��� ���� ����
    - Configuration > All Configuration
    - Platform > win32
- C/C++ > Genaral > Aditional include Directories
    - SFML���� �����ؿ� ����/������ �ִ� ��ġ(����)�� ����
    - $(SolutionDir) : ���� ������Ʈ ����
    - ���� �Է� ���� : $(SolutionDir)\External\include

- Linker > General > Additional Library Directories
    - SFML���� �����ؿ� ����/������ �ִ� ��ġ(����)�� ����
    - ���� �Է� ���� : $(SolutionDir)\External\lib

- Linker > Input > additional Dependancies 
    - Configuration > Release ī�װ��� ����

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

# Event 

## Event ����
- ���, ��Ȳ�� ��ȭ 
- Interface�� �����޼� ����� ��Ȳ�� ��ȭ 
- Ű����, ���콺�� ����� ��Ȳ�� ��ȭ 
    - Ű���� �̺�Ʈ : Ű �Է� => Ű �Է�
    - ���콺 �̺�Ʈ : ���콺 Ŭ��(Press / Release) , �� ��ũ��, ������
- ��ġ ��ũ�� : ��ġ, ��������, ��ġ
- �ε� 

## Event Handling

- Event Delegate : �������� �̺�Ʈ�� ����
- Event Listening : �̺�Ʈ ����
- Event  Handle : ������ �̺�Ʈ�� ���ؼ� ������ ����