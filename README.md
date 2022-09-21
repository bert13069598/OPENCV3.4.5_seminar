# OPENCV3.4.5_seminar

## OPENCV 3.4.5 설치

[opencv 3.4.5](https://sourceforge.net/projects/opencvlibrary/files/3.4.5/opencv-3.4.5-vc14_vc15.exe/download)

## OPENCV 3.4.5 라이브러리와 C++ project 연결

새 프로젝트 만들기

Windows 데스크톱 마법사

빈프로젝트

Debug x64

프로젝트 속성(Alt+Enter)

디버깅 > 환경

PATH=C:\opencv-3.4.5\build\x64\vc15\bin;%PATH%

구성 > 모든 구성 > C/C++

추가 포함 디렉터리

C:\opencv-3.4.5\build\include

링커 > 일반

추가 라이브러리 디렉터리

C:\opencv-3.4.5\build\x64\vc15\lib

구성 : 활성(Debug)

링커 > 입력

추가 종속성

opencv_world345d.lib

## HW_1
<img src="https://github.com/bert13069598/OPENCV3.4.5_seminar/blob/master/Lena.png">
<img src="https://github.com/bert13069598/OPENCV3.4.5_seminar/blob/master/HW_1_result.png">

## HW_2
<img src="https://github.com/bert13069598/OPENCV3.4.5_seminar/blob/master/HW_2_2_foreground.png">
<img src="https://github.com/bert13069598/OPENCV3.4.5_seminar/blob/master/HW_2_2_background.png">
<img src="https://github.com/bert13069598/OPENCV3.4.5_seminar/blob/master/HW_2_2_result.png">
