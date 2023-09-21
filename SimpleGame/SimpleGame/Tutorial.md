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

- Solution Explorer > Drop Down Menu > Properies 
- ��� ���� ����
    - Configuration > All Configuration
    - Platform > win32
- C/C++ > Genaral > Aditional include Directories
    - SFML���� �����ؿ� ����/������ �ִ� ��ġ(����)�� ����
    - $(SolutionDir) : ���� ������Ʈ ����

- Linker > General > Additional Library Directories
    - SFML���� �����ؿ� ����/������ �ִ� ��ġ(����)�� ����

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

