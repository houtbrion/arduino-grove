# seeed studio grove systemのArduino用サンプルプログラム集


## 目的
* seeed studioのwikiに公開されている各種サンプルプログラムをgitでまとめて管理できるようにする．
* 1つのgroveモジュールに対して，1つのプログラムが対応するように整理し直す． (一部のサンプルプログラムは複数のモジュールに依存しているため)

## 更新
seeedstudioのwikiが大幅変更されたこともあり，各種ライブラリの状況の確認も込めて，各種URLやライブラリの状況を反映．

## Grove - Starter Kit for Arduino
[スターターキット](http://www.seeedstudio.com/depot/Grove-Starter-Kit-V3-p-1855.html "スターターキット")に含まれているモジュールは以下の通り．

* 1 x Base Shield
* 1 x Grove - LCD RGB Backlight
* 1 x Grove - Smart Relay
* 1 x Grove - Buzzer
* 1 x Grove - Sound Sensor
* 1 x Grove - Touch Sensor
* 1 x Grove - Rotary Angle Sensor
* 1 x Grove - Temperature Sensor
* 1 x Grove - LED
* 1 x Grove - Light Sensor
* 1 x Grove - Button
* 1 x DIP LED Blue-Blue
* 1 x DIP LED Green-Green
* 1 x DIP LED Red-Red
* 1 x Mini Servo
* 10 x Grove Cables
* 1 x 9V to Barrel Jack Adapter
* 1 x Grove starter kit Manual
* 1 x Green Plastic Box

### Grove - LCD RGB Backlight
* [製品情報](http://www.seeedstudio.com/depot/Grove-LCD-RGB-Backlight-p-1643.html?cPath=34_36 "製品情報")
* [技術情報](http://wiki.seeedstudio.com/Grove-LCD_RGB_Backlight/ "技術情報")
* [ライブラリ](https://github.com/Seeed-Studio/Grove_LCD_RGB_Backlight "ライブラリ")

Seeed Studioがgithubで公開しているライブラリに含まれるサンプルプログラム「Blink」で動作確認．
LCDはシールドのI2Cに接続することで利用可能．

### Grove - Smart Relay
* [製品情報](https://www.seeedstudio.com/grove-relay-p-769.html?cPath=156_160 "製品情報")
* [技術情報](http://wiki.seeedstudio.com/Grove-Relay/ "技術情報")

Wikiのサンプルプログラムは，デジタル2,3番に2つボタンをつけて,4番にリレーをつける．
2つのボタンを交互に押すとリレーがON/OFFされる．しかし，D2とD3に2つのボタンを付けるのは特別なケーブルが必要なことと，
スターターキットにはボタンは1つしかないため，2番に接続したボタンを押している間だけリレーが
ONになるように変更．

使用した
[サンプルプログラム](
https://github.com/houtbrion/arduino-grove/blob/master/smart_relay/smart_relay.ino
"サンプルプログラム")は本プロジェクトの「
smart\_relay
/
smart\_relay.ino
」に保存．


### Grove - Buzzer
* [製品情報](https://www.seeedstudio.com/grove-buzzer-p-768.html?cPath=156_159 "製品情報")
* [技術情報](http://wiki.seeedstudio.com/Grove-Buzzer/ "技術情報")

テストプログラムは，一定時間間隔でブザーがなるだけのプログラム．
結構うるさい :-P

使用した
[サンプルプログラム] (https://github.com/houtbrion/arduino-grove/blob/master/buzzer/buzzer.ino "サンプルプログラム")
は本プロジェクトの「buzzer/buzzer.ino」．

### Grove - Sound Sensor
* [製品情報](http://www.seeedstudio.com/depot/grove-sound-sensor-p-752.html?cPath=144_148 "製品情報")
* [技術情報](http://wiki.seeedstudio.com/Grove-Sound_Sensor/ "技術情報")

旧Wikiのサンプルプログラムはデジタル3番ピンにLED, アナログ0番に音センサを繋いで使う．
センサモジュール上のマイクに向かって喋るとLEDが光る．
今のwikiのサンプルプログラムは，A0に音センサをつないで，シリアルに計算値を出力する．

使用した
[サンプルプログラム](
https://github.com/houtbrion/arduino-grove/blob/master/sound_sensor/sound_sensor.ino
"サンプルプログラム")は本プロジェクトの「
sound\_sensor
/
sound\_sensor.ino
」に保存．



### Grove - Touch Sensor
* [製品情報](http://www.seeedstudio.com/depot/grove-touch-sensor-p-747.html?cPath=156_160 "製品情報")
* [技術情報](http://wiki.seeedstudio.com/Grove-Touch_Sensor/ "技術情報")

プログラムはタッチセンサに触れるとLEDが光る仕組み．

Wikiのサンプルプログラムは
LEDをデジタルの12番，タッチセンサをデジタルの9番に接続するようになっているが，groveのシールドは
デジタルは2から8までしかないので，LEDをD3,センサをD8に接続するように変更．

使用した
[サンプルプログラム](
https://github.com/houtbrion/arduino-grove/blob/master/touch_sensor/touch_sensor.ino
"サンプルプログラム")は本プロジェクトの「
touch\_sensor
/
touch\_sensor.ino
」に保存．



### Grove - Rotary Angle Sensor
* [製品情報](https://www.seeedstudio.com/grove-rotary-angle-sensor-p-p-1242.html?cPath=156_160 "製品情報")
* [技術情報](http://wiki.seeedstudio.com/Grove-Rotary_Angle_Sensor/ "技術情報")

旧Wikiのサンプルプログラムは，コメント欄にデジタル3番端子にLEDを接続して，アナログ0番にロータリーセンサをつける
ことになっているが，実際のプログラムはデジタル2番端子にLEDをつけるようになっている．
新しいwikiのプログラムはコメント欄がみ．

使用した
[サンプルプログラム](
https://github.com/houtbrion/arduino-grove/blob/master/rotary_angle_sensor/rotary_angle_sensor.ino
"サンプルプログラム")は本プロジェクトの「
rotary\_angle\_sensor
/
rotary\_angle\_sensor.ino
」に保存．


### Grove - Temperature Sensor
* [製品情報](https://www.seeedstudio.com/grove-temperature-sensor-p-774.html?cPath=144_147 "製品情報")
* [技術情報](http://wiki.seeedstudio.com/Grove-Temperature_Sensor_V1.2/ "技術情報")

旧Wikiのサンプルプログラムは，アナログの5番端子に接続して使うことになっているが，groveのシールドは0番から3番までしか
端子がないため，アナログ0番に接続端子を変更していたが，新wikiではアナログ0番にみ．

公式なWikiサンプルプログラムの他にも，github上にサンプルプログラムやライブラリのプロジェクトが存在する．
* [サンプルプログラム](https://github.com/Seeed-Studio/Grove_Temperature_Sensor "サンプルプログラム")
* [Suliライブラリ](https://github.com/Seeed-Studio/Temperature_Suli "Suliライブラリ")

使用した
[サンプルプログラム](
https://github.com/houtbrion/arduino-grove/blob/master/temperature_sensor/temperature_sensor.ino
"サンプルプログラム")は本プロジェクトの「
temperature\_sensor
/
temperature\_sensor.ino
」に保存．


### Grove - LED
* [製品情報](https://www.seeedstudio.com/Grove-LED-p-767.html?cPath=81_35 "製品情報")

Wikiの技術情報は製品が製造中止になったためか，既に消えている．
また，旧Wikiのサンプルプログラムは，ボタンとLEDの2つのモジュールをシールドに刺して利用して，
ボタンを押している間だけLEDが点灯するプログラム．

モジュールを2つ使うのが面倒だったので，1秒間隔でLEDが点滅するプログラムに変更．

なお，使用した
[サンプルプログラム](
https://github.com/houtbrion/arduino-grove/blob/master/led/led.ino
"サンプルプログラム")は本プロジェクトの「
led/
led.ino
」に保存．

### Grove - Light Sensor
* [製品情報](https://www.seeedstudio.com/Grove-Light-Sensor-p-746.html?cPath=25_27 "製品情報")
* [技術情報](http://wiki.seeedstudio.com/Grove-Light_Sensor/ "技術情報")

Wikiのサンプルプログラムはデジタル12ピンにLEDをつけるようになっているが，LEDはなしで
動くようデジタル13番ピン(基板上のもの)に変更．
使用した
[サンプルプログラム](
https://github.com/houtbrion/arduino-grove/blob/master/light_sensor/light_sensor.ino
"サンプルプログラム")は本プロジェクトの「
light\_sensor
/
light\_sensor.ino
」に保存．

### Grove - Button
* [製品情報](https://www.seeedstudio.com/grove-button-p-766.html?cPath=156_160 "製品情報")
* [技術情報](http://wiki.seeedstudio.com/Grove-Button/ "技術情報")

旧Wikiのサンプルプログラムの説明では，「デジタル13番ピンにLEDを挿して動作確認せよ」と書いてあるが，
デジタル13番ピンには基板上にLEDが付いているため，シールドの下に隠れていることを除けば
特にLEDを新たに接続する必要はない．

テスト的に実行した際には，LEDは接続せず，groveシールドの下に隠れているLEDが点滅するようすを
確認した．

なお，本リポジトリに収録したサンプルプログラム(「button/button.ino」)は，D4にLEDを接続するよう修正している．
* [サンプルプログラム](https://github.com/houtbrion/arduino-grove/blob/master/button/button.ino "サンプルプログラム")

## 音関係
### 音量センサ
* [製品情報](https://www.seeedstudio.com/Grove-Loudness-Sensor-p-1382.html "製品情報")
* [技術情報](http://wiki.seeedstudio.com/Grove-Loudness_Sensor/ "技術情報")

これは，スターターキットに入っている音センサと違い，環境音の大小を計測するためのもの．
Wikiのサンプルプログラムは問題なく動作した．

使用した
[サンプルプログラム](
https://github.com/houtbrion/arduino-grove/blob/master/loudness_sensor/loudness_sensor.ino
"サンプルプログラム")は本プロジェクトの「
loudness\_sensor
/
loudness\_sensor.ino
」に保存．



### スピーカー
* [製品情報](https://www.seeedstudio.com/Grove-Speaker-p-1445.html "製品情報")
* [技術情報](http://wiki.seeedstudio.com/Grove-Speaker/ "技術情報")

使用した
[サンプルプログラム](
https://github.com/houtbrion/arduino-grove/blob/master/Speaker/Speaker.ino
"サンプルプログラム")は本プロジェクトの「
Speaker
/
Speaker.ino
」に保存．
このサンプルプログラムは「ドレミファソラシ」まで
出すプログラムとなっている．

## 位置や動作関係
### 3軸デジタルコンパス
* [製品情報](http://www.seeedstudio.com/depot/Grove-3Axis-Digital-Compass-p-759.html "製品情報")
* [技術情報](http://wiki.seeedstudio.com/Grove-3-Axis_Compass_V1.0/ "技術情報")
* [Suliライブラリ](https://github.com/Seeed-Studio/Digital_Compass_Suli "Suliライブラリ")
* [ノーマルライブラリ](https://github.com/Seeed-Studio/Grove_3Axis_Digital_Compass_HMC5883L "ノーマルライブラリ")

3軸デジタルコンパスは，githubにライブラリが2種類存在し，
違いがよくわからない．とりあえず，ノーマルライブラリの
exapmleを使って動作を
確認した．

なお，テストに用いたプログラムはSerialの通信速度を
9600に落とした．

使用した
[サンプルプログラム](
https://github.com/houtbrion/arduino-grove/blob/master/Triple_Axis_Digital_Compass/Triple_Axis_Digital_Compass.ino
"サンプルプログラム")は本プロジェクトの「
Triple\_Axis\_Digital\_Compass
/
Triple\_Axis\_Digital\_Compass.ino
」に保存．



### 3軸デジタル加速度センサ(ADXL345)
* [製品情報](https://www.seeedstudio.com/Grove-3Axis-Digital-Accelerometer16g-p-1156.html "製品情報")
* [技術情報](http://wiki.seeedstudio.com/Grove-3-Axis_Digital_Accelerometer-16g/ "技術情報")
* [ライブラリ](https://github.com/Seeed-Studio/Accelerometer_ADXL345 "ライブラリ")


githubで公開されているライブラリのサンプルプログラムは素直に動作した．

他にも以下のようなライブラリ等がある．
* [Suliライブラリ](https://github.com/Seeed-Studio/ACC_Adxl345_Suli "Suliライブラリ")
* [ジェスチャ認識ライブラリ](https://github.com/Seeed-Studio/Gesture_Recognition "ジェスチャ認識ライブラリ")
* [ゲーム](https://github.com/Seeed-Studio/Rainbowduino_Snake_Game "ゲーム")

### 3軸アナログ加速度センサ
* [製品情報](http://www.seeedstudio.com/depot/Grove-3Axis-Analog-Accelerometer-p-1086.html "製品情報")
* [技術情報](http://wiki.seeedstudio.com/Grove-3-Axis_Analog_Accelerometer/ "技術情報")
* [ライブラリ](http://www.seeedstudio.com/wiki/File:AnalogAccelerometer.zip "ライブラリ")


上記ライブラリをダウンロードして展開すると，examplesの下のディレクトリ名とサンプルプログラムの名前が異なるため，
Arduino IDEから開けないものがあるため，ディレクトリ名かサンプルプログラムのファイル名を変更する
必要がある．

サンプルプログラムのフアイル名を変更したライブラリをAnalogAccelerometer以下に保存．

### I2C 3軸デジタル加速度センサ
* [製品情報](http://www.seeedstudio.com/depot/Grove-3Axis-Digital-Accelerometer15g-p-765.html "製品情報")
* [技術情報](http://wiki.seeedstudio.com/Grove-3-Axis_Digital_Accelerometer-1.5g/ "技術情報")
* [ライブラリ](https://github.com/Seeed-Studio/Accelerometer_MMA7660 "ライブラリ")

ライブラリ付属のサンプルプログラムで動作は確認できた．

### I2C 3軸ジャイロセンサ
* [製品情報](http://www.seeedstudio.com/depot/Grove-3Axis-Digital-Gyro-p-750.html "製品情報")
* [技術情報](http://wiki.seeedstudio.com/Grove-3-Axis_Digital_Gyro/ "技術情報")
* [ライブラリ](https://github.com/Seeed-Studio/Grove_3_Axis_Digital_Gyro "ライブラリ")

ライブラリのサンプルプログラムは素直に動作した．

### 1軸ジャイロセンサ(製造中止)
製造中止のため，wikiの技術情報ページは消された．

* [製品情報](https://www.seeedstudio.com/grove-single-axis-analog-gyro-p-1451.html?cPath=144_146 "製品情報")
* [サンプルプログラム](https://github.com/Seeed-Studio/Grove_Single_Axis_Analog_Gyro "サンプルプログラム")

githubにライブラリではなく，サンプルプログラムだけが公開されている．

使用した
[サンプルプログラム](
https://github.com/houtbrion/arduino-grove/blob/master/Single_Axis_Analog_Gyro_Test_Code/Single_Axis_Analog_Gyro_Test_Code.ino
"サンプルプログラム")は本プロジェクトの「
Single\_Axis\_Analog\_Gyro\_Test\_Code
/
Single\_Axis\_Analog\_Gyro\_Test\_Code.ino
」にも保存．

### ロータリーエンコーダ
* [製品情報](https://www.seeedstudio.com/Grove-Encoder-p-1352.html "製品情報")
* [技術情報](http://wiki.seeedstudio.com/Grove-Encoder/ "技術情報")
* [ライブラリ](https://seeeddoc.github.io/Grove-Encoder/res/Encoder.zip "ライブラリ")

ライブラリ上のサンプルプログラムは
以下のライブラリを内部で使っているため，同時に
インストールする必要がある．

* [TimerOneライブラリ](https://www.pjrc.com/teensy/td_libs_TimerOne.html "TimerOneライブラリ")

エンコーダのサンプルプログラムはエンコーダを取り付ける場所を
指定する部分がなく，デジタル2番の端子につけるしかないため，
ライブラリを改造したくなる．

### PIRモーションセンサ
* [製品情報](https://www.seeedstudio.com/Grove-PIR-Motion-Sensor-p-802.html "製品情報")
* [技術情報](http://wiki.seeedstudio.com/Grove-PIR_Motion_Sensor/ "技術情報")
* [サンプルプログラム](https://github.com/Seeed-Studio/PIR_Motion_Sensor "サンプルプログラム")

公式[サンプルプログラム](
https://github.com/houtbrion/arduino-grove/blob/master/PIRMotionSensor/PIRMotionSensor.ino
"サンプルプログラム")の写しを本プロジェクトの「
PIRMotionSensor
/
PIRMotionSensor.ino
」に保存．

人が動くと検出する．

### ボリューム
* [製品情報](https://www.seeedstudio.com/Grove-Rotary-Angle-Sensor-p-770.html?cPath=85_52 "製品情報")
* [技術情報](http://wiki.seeedstudio.com/Grove-Rotary_Angle_Sensor/ "技術情報")
* [サンプルプログラム](https://github.com/Seeed-Studio/Rotary_Angle_Sensor "サンプルプログラム")

サンプルプログラムはボリュームの種類に関係ないため，動作確認についての情報は
スターターキットの
内容を参照．

### ボリューム(パネルタイプ)
* [製品情報](https://www.seeedstudio.com/Grove-Rotary-Angle-SensorP-p-1242.html "製品情報")
* [技術情報](http://wiki.seeedstudio.com/Grove-Rotary_Angle_Sensor/ "技術情報")
* [サンプルプログラム](https://github.com/Seeed-Studio/Rotary_Angle_Sensor "サンプルプログラム")

ソフト的にはパネルタイプか否かは関係がないため，ソフトや
動作確認の情報は省略．
詳細はスターターキットの内容を参照．

### スライドボリューム
* [製品情報](https://www.seeedstudio.com/Grove-Slide-Potentiometer-p-1196.html "製品情報")
* [技術情報](http://wiki.seeedstudio.com/Grove-Slide_Potentiometer/ "技術情報")

技術情報のWikiの
[サンプルプログラム](
https://github.com/houtbrion/arduino-grove/blob/master/SlidePotentiometer/SlidePotentiometer.ino
"サンプルプログラム")は本プロジェクトの「
SlidePotentiometer
/
SlidePotentiometer.ino
」に保存．

元々のサンプルプログラムはA0とA1端子にLEDとスライドボリュームを同時に繋げる構成だったが，
デジタル端子の2番にLEDを変更．

### GPS
* [製品情報](https://www.seeedstudio.com/Grove-GPS-p-959.html "製品情報")
* [技術情報](http://wiki.seeedstudio.com/Grove-GPS/ "技術情報")

使用した
[サンプルプログラム](
https://github.com/houtbrion/arduino-grove/blob/master/GPS/GPS.ino
"サンプルプログラム")は本プロジェクトの「
GPS
/
GPS.ino
」に保存．

### GSR
* [製品情報](https://www.seeedstudio.com/Grove-GSR-sensor-p-1614.html "製品情報")
* [技術情報](http://wiki.seeedstudio.com/Grove-GSR_Sensor/ "技術情報")

技術情報のWikiの
[サンプルプログラム](
https://github.com/houtbrion/arduino-grove/blob/master/GSR_Sensor/GSR_Sensor.ino
"サンプルプログラム")は本プロジェクトの「
GSR\_Sensor
/
GSR\_Sensor.ino
」に保存．


## ユーザインタフェース
### シリアルカメラキット
* [製品情報](https://www.seeedstudio.com/Grove-Serial-Camera-Kit-p-1608.html "製品情報")
* [技術情報](http://wiki.seeedstudio.com/Grove-Serial_Camera_Kit/ "技術情報")
* [サンプルプログラム](https://github.com/Seeed-Studio/Grove_Serial_Camera_Kit "サンプルプログラム")

[サンプルプログラム](
https://github.com/houtbrion/arduino-grove/blob/master/SerialCameral_DemoCode_CJ_OV528_SoftSer/SerialCameral_DemoCode_CJ_OV528_SoftSer.ino
"サンプルプログラム")のうち，ソフトシリアルを利用するものを本プロジェクトの「
SerialCameral\_DemoCode\_CJ\_OV528\_SoftSer
/
SerialCameral\_DemoCode\_CJ\_OV528\_SoftSer.ino
」に収録．

ただし，元のサンプルプログラムはSDのチップセレクトピンがD4端子であることが前提のコードになっていたり，
技術情報のWikiにはI2Cにボタンを付けろと書いてあるが，サンプルプログラムはA0端子につなぐことになって
いたり，ムチャクチャだった上に，SPI関係のインクルードファイルがロードできずに
ライブラリのコンパルで止まるなど，ダメダメだったので，手元の環境で動くようすべて修正した．

とりあえず，カメラはgroveのシールドのD2コネクタ，SDシールドはsparc funのマイクロSDだったので
D8番がチップセレクト．さらに，ボタンはA0端子．
また，SD.hをロードする前に，SPI.hをロードするように
修正．

### I2Cタッチセンサ
* [製品情報](https://www.seeedstudio.com/Grove-I2C-Touch-Sensor-p-840.html "製品情報")
* [技術情報](http://wiki.seeedstudio.com/Grove-I2C_Touch_Sensor/ "技術情報")
* [ライブラリ](https://github.com/Seeed-Studio/Grove_I2C_Touch_Sensor "ライブラリ")

ライブラリ提供のサンプルプログラムはどれかのセンサに触れないとなにも出力されないため，
自分で使う際は注意(かならず触る)．

### 親指ジョイスティック
* [製品情報](https://www.seeedstudio.com/Grove-Thumb-Joystick-p-935.html "製品情報")
* [技術情報](http://wiki.seeedstudio.com/Grove-Thumb_Joystick/ "技術情報")

Wikiのサンプルプログラムは変更など必要なく，素直に動作した．
使用した
[サンプルプログラム](
https://github.com/houtbrion/arduino-grove/blob/master/Thumb_Joystick/Thumb_Joystick.ino
"サンプルプログラム")は本プロジェクトの「
Thumb\_Joystick
/
Thumb\_Joystick.ino
」に保存．

### ボタン
* [製品情報](https://www.seeedstudio.com/Grove-Button-p-766.html "製品情報")
* [技術情報](http://wiki.seeedstudio.com/Grove-Button/ "技術情報")
このモジュールはパネルタイプのボタンで技術的にはパネル無しの物と全く同じであるため，
詳細は省く．



## 表示関係
### LEDバー
* [製品情報](https://www.seeedstudio.com/Grove-LED-Bar-p-1178.html "製品情報")
* [技術情報](http://wiki.seeedstudio.com/Grove-LED_Bar/ "技術情報")
* [ライブラリ](https://github.com/Seeed-Studio/Grove_LED_Bar "ライブラリ")

ライブラリのWaveというサンプルプログラムで試してみたが，
サンプルプログラムは
関数への引数の型の問題でコンパイル
エラーになる．とりあえず，キャストで
無理やりコンパイルできるようにしたところ動作した．

標準以外のライブラリには以下の様なものもある．

* [Suliライブラリ](https://github.com/Seeed-Studio/LED_Bar_Suli "Suliライブラリ")

なお，使用した
[サンプルプログラム](
https://github.com/houtbrion/arduino-grove/blob/master/Grove_LED_Bar/Grove_LED_Bar.ino
"サンプルプログラム")は本プロジェクトの「
Grove\_LED\_Bar/
Grove\_LED\_Bar.ino
」に保存．


### 赤色LED
* [製品情報](https://www.seeedstudio.com/Grove-Red-LED-p-1142.html "製品情報")
* [技術情報](http://wiki.seeedstudio.com/Grove-Red_LED/ "技術情報")

スターターキットに入っているLEDソケットと同じ(赤色LEDが添付されているところが違い)
である．詳細はそちらを参照のこと．

### サークル型LED
* [製品情報](https://www.seeedstudio.com/Grove-Circular-LED-p-1353.html?cPath=81_35 "製品情報")
* [技術情報](http://wiki.seeedstudio.com/Grove-Circular_LED/ "技術情報")
* [ライブラリ](https://github.com/SeeedDocument/Grove-Circular_LED/raw/master/res/CircularLED.zip "ライブラリ")

ライブラリは技術情報のWikiにしかない．
また，ライブラリに添付のサンプルプログラムは
サークル型LEDが2つ必要なことと，
grove用のシールド基板では使えない端子を
使っていたため，その部分は変更．

使用した
[サンプルプログラム](
https://github.com/houtbrion/arduino-grove/blob/master/CircularLEDtest/CircularLEDtest.ino
"サンプルプログラム")は本プロジェクトの「CircularLEDtest/CircularLEDtest.ino」に保存．

### RGB LED
* [製品情報](https://www.seeedstudio.com/Grove-Chainable-RGB-LED-p-850.html "製品情報")
* [技術情報](http://wiki.seeedstudio.com/Grove-Chainable_RGB_LED/ "技術情報")
* [ライブラリ](https://github.com/pjpmarques/ChainableLED "ライブラリ")

ライブラリ付属の「
CycleThroughColors
」を改造したもので動作を確認．
使用した
[サンプルプログラム](
https://github.com/houtbrion/arduino-grove/blob/master/CycleThroughColors/CycleThroughColors.ino
"サンプルプログラム")は本プロジェクトの「
CycleThroughColors/
CycleThroughColors.ino
」に保存．

### 7セグメント4桁ディスプレイ
* [製品情報](https://www.seeedstudio.com/Grove-4Digit-Display-p-1198.html "製品情報")
* [技術情報](http://wiki.seeedstudio.com/Grove-4-Digit_Display/ "技術情報")
* [ライブラリ](https://github.com/Seeed-Studio/Grove_4Digital_Display "ライブラリ")

* [Suliライブラリ](https://github.com/Seeed-Studio/Four_Digit_Display_Suli "Suliライブラリ")

ライブラリ付属のサンプルプログラムの一部にはTimerOneライブラリも必要．
動作確認はTimerOneが不要な「NumberFlow」で実施．


### OLED display 1.12inch
* [製品情報](https://www.seeedstudio.com/Grove-OLED-Display-1.12%22-p-824.html "製品情報")
* [技術情報](http://wiki.seeedstudio.com/Grove-OLED_Display_1.12inch/ "技術情報")
* [ライブラリ](https://github.com/Seeed-Studio/OLED_128x64_Suli "ライブラリ")
* [サンプルガジェット](https://github.com/Seeed-Studio/Travelling_Mine "サンプルガジェット")
* [サンプルガジェット](https://github.com/Seeed-Studio/Air_Quality_Test_Box "サンプルガジェット")
* [ライブラリ](https://github.com/Seeed-Studio/OLED_Display_128X64 "ライブラリ")

## 環境関係
### I2C 気圧センサ(BMP180)
* [製品情報](https://www.seeedstudio.com/Grove-Barometer-Sensor-BMP180-p-1840.html?cPath=25_124 "製品情報")
* [技術情報](http://wiki.seeedstudio.com/Grove-Barometer_Sensor-BMP180/ "技術情報")
* [ライブラリ](https://github.com/Seeed-Studio/Grove_Barometer_Sensor "ライブラリ")

Groveの気圧センサには，BMP180搭載(このモジュール)とBMP085のものがあり，
技術情報のWiki上に貼られているライブラリは両方対応と記述されている．

しかし，github上に存在する同じ名前の
ライブラリのプロジェクトにはBMP085対応としか
記述していない．

実際に動作させてみると，このモジュール(BMP180)でも値は取得できている．
ただし，値の中身は確認していないため，読み取り以外の部分で
問題があるかもしれない．

### I2C デジタル光センサ
* [製品情報](https://www.seeedstudio.com/Grove-Digital-Light-Sensor-p-1281.html?cPath=25_128 "製品情報")
* [技術情報](http://wiki.seeedstudio.com/Grove-Digital_Light_Sensor/ "技術情報")
* [ライブラリ](https://github.com/Seeed-Studio/Grove_Digital_Light_Sensor "ライブラリ")

技術情報のWikiにはなにも書かれていないが，githubには
「Groveデジタル光センサ」と名前がつけられたプロジェクトが
存在したため，そちらで動作を試みたところ動作するようである．


### デジタル温度・湿度センサ pro
* [製品情報](https://www.seeedstudio.com/Grove-TemperatureHumidity-Sensor-Pro-p-838.html "製品情報")
* [技術情報](http://wiki.seeedstudio.com/Grove-Temperature_and_Humidity_Sensor_Pro/ "技術情報")
* [ライブラリ](https://github.com/Seeed-Studio/Grove_Temperature_And_Humidity_Sensor "ライブラリ")

このモジュールに搭載されているのは，DHT22/AM2302なので，通常のarduino用の
ライブラリでも動作する．実際に動作確認した際には以下のライブラリと
ライブラリ付属のサンプルプログラムで実施．

* [Arduion-DHTライブラリ](https://github.com/markruys/arduino-DHT "Arduino-DHTライブラリ")

Wikiの標準のライブラリを使った例の説明では，アナログポートにモジュールを接続するよう
記述されているが，Arduino-DHTライブラリはデジタル端子でも動作するため，
動作テストはデジタル端子の4に接続した．

### デジタル温度・湿度センサ
* [製品情報](https://www.seeedstudio.com/Grove-Temperature-%26-Humidity-Sensor-%EF%BC%88DHT11%EF%BC%89-p-745.html "製品情報")
* [技術情報](http://wiki.seeedstudio.com/Grove-TemperatureAndHumidity_Sensor/ "技術情報")
* [ライブラリ](https://github.com/Seeed-Studio/Grove_Temperature_And_Humidity_Sensor "ライブラリ")

このモジュールに搭載されているのは，DHT11なので，通常のarduino用の
ライブラリでも動作する．実際に動作確認した際には以下のライブラリと
ライブラリ付属のサンプルプログラムで実施．

* [Arduion-DHTライブラリ](https://github.com/markruys/arduino-DHT "Arduino-DHTライブラリ")

他にも次のようなライブラリが公開されている．ただし，Suliライブラリはなぜか
README.mdが別のモジュールのものが貼られている．
* [Suliライブラリ](https://github.com/Seeed-Studio/Temp_Hmi_Suli "Suliライブラリ")

### 火炎センサ
* [製品情報](https://www.seeedstudio.com/Grove-Flame-Sensor-p-1450.html "製品情報")
* [技術情報](http://wiki.seeedstudio.com/Grove-Flame_Sensor/ "技術情報")
* [サンプルプログラム](https://github.com/Seeed-Studio/Grove_Flame_Sensor "ライブラリ")

[サンプルプログラム](
https://github.com/houtbrion/arduino-grove/blob/master/Flame_Sensor/Flame_Sensor.ino
"サンプルプログラム")は本プロジェクトの「
Flame\_Sensor
/
Flame\_Sensor.ino
」にも収録．

少し離れたところでライターをON/OFFすると反応した．

### 光センサ(パネルタイプ)
* [製品情報](https://www.seeedstudio.com/Grove-Light-SensorP-p-1253.html "製品情報")
* [技術情報](https://www.seeedstudio.com/Grove-Light-Sensor(P)-p-1253.html "技術情報")

中身はスターターキットの光センサと同じなので省略

### 水センサ
* [製品情報](https://www.seeedstudio.com/Grove-Water-Sensor-p-748.html?cPath=25_27 "製品情報")
* [技術情報](http://wiki.seeedstudio.com/Grove-Water_Sensor/ "技術情報")
* [サンプルプログラム](https://github.com/Seeed-Studio/Grove_Water_Sensor "サンプルプログラム")

技術情報のWikiの
[サンプルプログラム](
https://github.com/houtbrion/arduino-grove/blob/master/Water_Sensor/Water_Sensor.ino
"サンプルプログラム")は本プロジェクトの「
Water\_Sensor
/
Water\_Sensor.ino
」に保存．

ティッシュを用意し，濡らしたティッシュで反応を確認した．

### 水分センサ
* [製品情報](https://www.seeedstudio.com/Grove-Moisture-Sensor-p-955.html "製品情報")
* [技術情報](http://wiki.seeedstudio.com/Grove-Moisture_Sensor/ "技術情報")
* [サンプルプログラム](https://github.com/Seeed-Studio/Moisture_Sensor "サンプルプログラム")

[サンプルプログラム](
https://github.com/houtbrion/arduino-grove/blob/master/Moisture_Sensor/Moisture_Sensor.ino
"サンプルプログラム")は本プロジェクトの「
Moisture\_Sensor
/
Moisture\_Sensor
」にも保存．


### Ultrasonic Ranger
* [製品情報](https://www.seeedstudio.com/Grove-Ultrasonic-Ranger-p-960.html "製品情報")
* [技術情報](http://wiki.seeedstudio.com/Grove-Ultrasonic_Ranger/ "技術情報")
* [ライブラリ](https://github.com/Seeed-Studio/Grove_Ultrasonic_Ranger "ライブラリ")

ライブラリに付属のサンプルプログラム「UltrasonicDisplayOnTerm」は単純なtypoのため
コンパイルできない状態になっているため，修正版を
本プロジェクトの
「
UltrasonicDisplayOnTerm
/
UltrasonicDisplayOnTerm.ino
」に収録．


### 磁気スイッチ
* [製品情報](https://www.seeedstudio.com/Grove-Magnetic-Switch-p-744.html "製品情報")
* [技術情報](http://wiki.seeedstudio.com/Grove-Magnetic_Switch/ "技術情報")
* [サンプルプログラム](https://github.com/Seeed-Studio/Magnetic_Switch "サンプルプログラム")

使用した
[サンプルプログラム](
https://github.com/houtbrion/arduino-grove/blob/master/Magnetic_Switch/Magnetic_Switch.ino
"サンプルプログラム")は本プロジェクトの「
Magnetic\_Switch
/
Magnetic\_Switch.ino
」に保存し，元のサンプルプログラムに付属していたライセンスファイル等も添付．

元のサンプルプログラムはgroveのシールドにないピン番号を
使っていたため，そこを修正した．

## その他
### 電流センサ
* [製品情報](https://www.seeedstudio.com/Grove-Electricity-Sensor-p-777.html?cPath=25_28 "製品情報")
* [技術情報](http://wiki.seeedstudio.com/Grove-Electricity_Sensor/ "技術情報")

使用した
[サンプルプログラム](
https://github.com/houtbrion/arduino-grove/blob/master/Electricity_Sensor/Electricity_Sensor.ino
"サンプルプログラム")は本プロジェクトの「
Electricity\_Sensor
/
Electricity\_Sensor
」に保存．

### RTC
* [製品情報](https://www.seeedstudio.com/Grove-RTC-p-758.html?cPath=25_131 "製品情報")
* [技術情報](http://wiki.seeedstudio.com/Grove-RTC/ "技術情報")
* [ライブラリ](https://github.com/Seeed-Studio/RTC_DS1307 "ライブラリ")

動作の確認はライブラリ添付のサンプルプログラムで実施(「SetTimeAndDisplay」)．
githubには別の種類のライブラリも存在．

* [Suliライブラリ](https://github.com/Seeed-Studio/RTC_DS1307_Suli "Suliライブラリ")

### スイッチ(P)
* [製品情報](https://www.seeedstudio.com/Grove-SwitchP-p-1252.html "製品情報")

### 赤外線反射センサ
* [製品情報](https://www.seeedstudio.com/Grove-Infrared-Reflective-Sensor-p-1230.html?cPath=25_31 "製品情報")
* [技術情報](http://wiki.seeedstudio.com/Grove-Infrared_Reflective_Sensor/ "技術情報")

使用した
[サンプルプログラム](
https://github.com/houtbrion/arduino-grove/blob/master/IR_Reflective_Sensor/IR_Reflective_Sensor.ino
"サンプルプログラム")は本プロジェクトの「
IR\_Reflective\_Sensor
/
IR\_Reflective\_Sensor.ino
」に保存．

このサンプルプログラムは
[TimerOneライブラリ](http://www.seeedstudio.com/wiki/File:TimerOne.zip "TimerOneライブラリ")
も利用しているため，
実際に使う際にはそちらも導入しておくこと．

### 赤外線距離センサ
* [製品情報](https://www.seeedstudio.com/Grove-IR-Distance-Interrupter-p-1278.html "製品情報")
* [技術情報](http://wiki.seeedstudio.com/Grove-IR_Distance_Interrupter_v1.2/ "技術情報")
* [サンプルプログラム](https://github.com/Seeed-Studio/Grove_IR_Distance_Sensor "サンプルプログラム")

上記サンプルプログラムのリポジトリから
[必要なものだけを抜き出したもの](
https://github.com/houtbrion/arduino-grove/blob/master/IR_Distance_Sensor/IR_Distance_Sensor.ino
"サンプルプログラム")を本プロジェクトの「
IR\_Distance\_Sensor
/
IR\_Distance\_Sensor.ino
」にも保存．


### ラインファインダ
* [製品情報](https://www.seeedstudio.com/Grove-Line-Finder-v1.1-p-2712.html "製品情報")
* [技術情報](http://wiki.seeedstudio.com/Grove-Line_Finder/ "技術情報")

使用した
[サンプルプログラム](
https://github.com/houtbrion/arduino-grove/blob/master/Line_Finder/Line_Finder.ino
"サンプルプログラム")は本プロジェクトの「
Line\_Finder
/
Line\_Finder.ino
」に保存．

### 赤外線送受信機
以下の2つのモジュールを使い，githubのライブラリ添付のサンプルプログラムを用いて
送受信の試験を行った．
一つだけ気をつける必要があるのは，受信機側はソースコードに
受信機をつなぐ端子の指定がされているが，
送信機側は不明確である．
また，モジュール側もどの端子がデータ端子か書いてない．
ただし，
技術情報のWikiにはD3端子が発信機のデータ端子と書いてあることと，
通常，groveのモジュールはVCC,GNDとデータピンが1つの場合は，外側しか
使っていないので同じノリで配線して動作させたところ，動作を確認できた．

####受信機
* [製品情報](https://www.seeedstudio.com/Grove-Infrared-Receiver-p-994.html "製品情報")
* [技術情報](http://wiki.seeedstudio.com/Grove-Infrared_Receiver/ "技術情報")

#### 発信機
* [製品情報](https://www.seeedstudio.com/Grove-Infrared-Emitter-p-993.html "製品情報")
* [技術情報](http://wiki.seeedstudio.com/Grove-Infrared_Emitter/ "技術情報")

#### 共通
* [ライブラリ](https://github.com/Seeed-Studio/IRSendRev "ライブラリ")
* このモジュールを使ったサンプルの[ガジェット](https://github.com/Seeed-Studio/MagicBracelet "ガジェット")

### 端子台
* [製品情報](https://www.seeedstudio.com/Grove-Screw-Terminal-p-996.html "製品情報")
* [技術情報](http://wiki.seeedstudio.com/Grove-Screw_Terminal/ "技術情報")

### I2Cハブ
* [製品情報](https://www.seeedstudio.com/Grove-I2C-Hub-p-851.html "製品情報")
* [技術情報](http://wiki.seeedstudio.com/Grove-I2C_Hub/ "技術情報")


### Xbee Carrier
* [製品情報](https://www.seeedstudio.com/Grove-XBee-Carrier-p-905.html "製品情報")
* [技術情報](http://wiki.seeedstudio.com/Grove-XBee_Carrier/ "技術情報")


# 調査中
購入したモジュールの中で動作が確認できていないものは以下のとおり．
電流センサ以外はハードの故障の可能性がある．

電流センサは測定用の配線材料を買わないと行けないのでしばらく動作確認不能．

しかし，ハードの初期不良だとすると発生頻度が高い．
ソフト的な問題にしても情報がなさすぎて
DEBUG困難．


## 音関係
### Serial MP3 Player
* [製品情報](https://www.seeedstudio.com/Grove-Serial-MP3-Player-p-1542.html "製品情報")
* [サンプルプログラム](https://github.com/Seeed-Studio/Grove_Serial_MP3_Player "サンプルプログラム")

技術情報のWikiの
[サンプルプログラム](
https://github.com/houtbrion/arduino-grove/tree/master/Grove_Serial_MP3_Player
"サンプルプログラム")は本プロジェクトの「
Grove\_Serial\_MP3\_Player
/
Grove\_Serial\_MP3\_Player.ino
」に保存．

システムを起動するとMP3モジュールを初期化する際に，「Playmode Set Error」となる．

## 位置や動作
### 3軸デジタル加速度センサ(H3LI331DL)
* [製品情報](https://www.seeedstudio.com/Grove-3Axis-Digital-Accelerometer400g-p-1897.html?cPath=25_132 "製品情報")
* [技術情報](http://wiki.seeedstudio.com/Grove-3-Axis_Digital_Accelerometer-400g/ "技術情報")
* [ライブラリ](https://github.com/Seeed-Studio/Accelerometer_H3LIS331DL "ライブラリ")

なぜだか，ライブラリ提供のセンサの初期化機能が失敗するため動作確認できない
(というか，新品なのに壊れている?)．


## 環境
### アルコールセンサ
* [製品情報](https://www.seeedstudio.com/Grove-Alcohol-Sensor-p-764.html "製品情報")
* [技術情報](http://wiki.seeedstudio.com/Grove-Alcohol_Sensor/ "技術情報")
* [サンプルガジェット](https://github.com/Seeed-Studio/Travelling_Mine "サンプルガジェット")
* [サンプルガジェット](https://github.com/Seeed-Studio/Air_Quality_Test_Box "サンプルガジェット")
* [サンプルプログラム](https://github.com/Seeed-Studio/Grove_Alcohol_Sensor "サンプルプログラム")


技術情報のサンプルプログラムとgithubのサンプルプログラムは異なり，技術情報の
[サンプルプログラム](
https://github.com/houtbrion/arduino-grove/blob/master/Grove_Alcohol_Sensor/Grove_Alcohol_Sensor.ino
"サンプルプログラム")は本プロジェクトの「
Grove\_Alcohol\_Sensor
/
Grove\_Alcohol\_Sensor.ino
」に保存．

また，実際のArduinoで動作させたところ，センサにヒーターがついており，ヒーターに
電流が流れると本体(Arduino)がまともに動作しなくなる．
具体的には，ArduinoのUSBシリアルがPCから見えなくなり，
使えなくなる．

さらに，github上のサンプルプログラム(本プロジェクトの
「
DetectAlchoholVapor
/
DetectAlchoholVapor.ino
」)も試したが，アルコールセンサを繋いで
動作させると止まる．

USB経由での電力供給だけでは電力が不足しているのかもしれないと考えて，
ACアダプタとUSBと両方接続したが，改善しなかった．

サンプルプログラムや技術情報のWikiでは，5～10分センサがあたたまるのに
必要と書かれているが，10分以上待っても同じ?

やはり，これも新品なのに故障?

## その他
### I2C ADC
* [製品情報](https://www.seeedstudio.com/Grove-I2C-ADC-p-1580.html "製品情報")
* [技術情報](http://wiki.seeedstudio.com/Grove-I2C_ADC/ "技術情報")
* [ライブラリ](https://github.com/Seeed-Studio/I2C_ADC_Suli "ライブラリ")

技術情報のWikiの
[サンプルプログラム](
https://github.com/houtbrion/arduino-grove/blob/master/I2C_ADC/I2C_ADC.ino
"サンプルプログラム")は本プロジェクトの「
I2C\_ADC
/
I2C\_ADC.ino
」にも保存．

I2Cの「Wire.endTransmission();」のところでシステム全体が固まる．
ソフトの問題か，購入したモジュールの不良か不明．

### チルトスイッチ
* [製品情報](https://www.seeedstudio.com/Grove-Tilt-Switch-p-771.html "製品情報")
* [技術情報](http://wiki.seeedstudio.com/Grove-Tilt_Switch/ "技術情報")

技術情報のWikiの
[サンプルプログラム](
https://github.com/houtbrion/arduino-grove/blob/master/Tilt_Switch/Tilt_Switch.ino
"サンプルプログラム")は本プロジェクトの「
Tilt\_Switch
/
Tilt\_Switch.ino
」に保存．

まったく動作しない．
振るとカラカラ音がするから，壊れている可能性大．
買ったばかりなのに．


### Grove - 125KHz RFID Reader
* [製品情報](https://www.seeedstudio.com/Grove-125KHz-RFID-Reader-p-1008.html "製品情報")
* [技術情報](http://wiki.seeedstudio.com/Grove-125KHz_RFID_Reader/ "技術情報")

技術情報のWikiの
[サンプルプログラム](
https://github.com/houtbrion/arduino-grove/blob/master/Grove_RFID_Reader/Grove_RFID_Reader.ino
"サンプルプログラム")は本プロジェクトの「
Grove\_RFID\_Reader
/
Grove\_RFID\_Reader.ino
」に保存．

seeed studioのgithubのリポジトリには
[ライブラリ](
https://github.com/Seeed-Studio/RFID_Library
"ライブラリ")化したソースが存在するが，動作は未確認．
