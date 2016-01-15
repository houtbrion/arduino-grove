# seeed studio grove systemのArduino用サンプルプログラム集


## 目的
* seeed studioのwikiに公開されている各種サンプルプログラムをgitでまとめて管理できるようにする．
* 1つのgroveモジュールに対して，1つのプログラムが対応するように整理し直す． (一部のサンプルプログラムは複数のモジュールに依存しているため)



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
* [技術情報](http://www.seeedstudio.com/wiki/Grove_-_LCD_RGB_Backlight "技術情報")
* [ライブラリ](https://github.com/Seeed-Studio/Grove_LCD_RGB_Backlight "ライブラリ")

Seeed Studioがgithubで公開しているライブラリに含まれるサンプルプログラム「Blink」で動作確認．
LCDはシールドのI2Cに接続することで利用可能．

### Grove - Smart Relay
* [製品情報](http://www.seeedstudio.com/depot/grove-relay-p-769.html?cPath=156_160 "製品情報")
* [技術情報](http://www.seeedstudio.com/wiki/Grove_-_Relay "技術情報")

元々のWikiのサンプルプログラムは，デジタル1,2番に2つボタンをつけて,6番にリレーをつける．
2つのボタンを交互に押すとリレーがON/OFFされる．しかし，シールドにはデジタルの1番はないことと
スターターキットにはボタンは1つしかないため，2番に接続したボタンを押している間だけリレーが
ONになるように変更．

### Grove - Buzzer
* [製品情報](http://www.seeedstudio.com/depot/grove-buzzer-p-768.html?cPath=156_159 "製品情報")
* [技術情報](http://www.seeedstudio.com/wiki/Grove_-_Buzzer "技術情報")

テストプログラムは，一定時間間隔でブザーがなるだけのプログラム．
結構うるさい :-P

### Grove - Sound Sensor
* [製品情報](http://www.seeedstudio.com/depot/grove-sound-sensor-p-752.html?cPath=144_148 "製品情報")
* [技術情報](http://www.seeedstudio.com/wiki/index.php?title=Twig_-_Sound_Sensor "技術情報")

Wikiのサンプルプログラムはデジタル3番ピンにLED, アナログ0番に音センサを繋いで使う．
センサモジュール上のマイクに向かって喋るとLEDが光る．

### Grove - Touch Sensor
* [製品情報](http://www.seeedstudio.com/depot/grove-touch-sensor-p-747.html?cPath=156_160 "製品情報")
* [技術情報](http://www.seeedstudio.com/wiki/index.php?title=Twig_-_Touch_Sensor "技術情報")

プログラムはタッチセンサに触れるとLEDが光る仕組み．

Wikiのサンプルプログラムは
LEDをデジタルの12番，タッチセンサをデジタルの9番に接続するようになっているが，groveのシールドは
デジタルは2から8までしかないので，LEDをD3,センサをD8に接続するように変更．

### Grove - Rotary Angle Sensor
* [製品情報](http://www.seeedstudio.com/depot/grove-rotary-angle-sensor-p-p-1242.html?cPath=156_160 "製品情報")
* [技術情報](http://www.seeedstudio.com/wiki/Grove_-_Rotary_Angle_Sensor "技術情報")

Wikiのサンプルプログラムは，コメント欄にデジタル3番端子にLEDを接続して，アナログ0番にロータリーセンサをつける
ことになっているが，実際のプログラムはデジタル2番端子にLEDをつけるようになっている．
とりあえず，コメントに合わせてLEDの接続先は変更．

### Grove - Temperature Sensor
* [製品情報](http://www.seeedstudio.com/depot/grove-temperature-sensor-p-774.html?cPath=144_147 "製品情報")
* [技術情報](http://www.seeedstudio.com/wiki/Grove_-_Temperature_Sensor_V1.2 "技術情報")

Wikiのサンプルプログラムは，アナログの5番端子に接続して使うことになっているが，groveのシールドは0番から3番までしか
端子がないため，アナログ0番に接続端子を変更．

公式なWikiサンプルプログラムの他にも，github上にサンプルプログラムやライブラリのプロジェクトが存在する．
* [サンプルプログラム](https://github.com/Seeed-Studio/Grove_Temperature_Sensor "サンプルプログラム")
* [Suliライブラリ](https://github.com/Seeed-Studio/Temperature_Suli "Suliライブラリ")

### Grove - LED
* [製品情報](http://www.seeedstudio.com/depot/Grove-LED-p-767.html?cPath=81_35 "製品情報")
* [技術情報](http://www.seeedstudio.com/wiki/index.php?title=GROVE_-_Starter_Kit_v1.1b#Grove_-_LED "技術情報")

Wikiのサンプルプログラムは，ボタンとLEDの2つのモジュールをシールドに刺して利用する．
ボタンを押している間だけLEDが点灯するプログラム．

モジュールを2つ使うのが面倒だったので，1秒間隔でLEDが点滅するプログラムに変更．

### Grove - Light Sensor
* [製品情報](http://www.seeedstudio.com/depot/Grove-Light-Sensor-p-746.html?cPath=25_27 "製品情報")
* [技術情報](http://www.seeedstudio.com/wiki/Grove_-_Light_Sensor "技術情報")

Wikiのサンプルプログラムはデジタル12ピンにLEDをつけるようになっているが，LEDはなしで
動くようデジタル13番ピン(基板上のもの)に変更．

### Grove - Button
* [製品情報](http://www.seeedstudio.com/depot/grove-button-p-766.html?cPath=156_160 "製品情報")
* [技術情報](http://www.seeedstudio.com/wiki/Grove_-_Button "技術情報")

Wikiのサンプルプログラムの説明では，「デジタル13番ピンにLEDを挿して動作確認せよ」と書いてあるが，
デジタル13番ピンには基板上にLEDが付いているため，シールドの下に隠れていることを除けば
特にLEDを新たに接続する必要はない．

テスト的に実行した際には，LEDは接続せず，groveシールドの下に隠れているLEDが点滅するようすを
確認した．


## 音関係

### 音量センサ
* [製品情報](http://www.seeedstudio.com/depot/Grove-Loudness-Sensor-p-1382.html "製品情報")
* [技術情報](http://www.seeedstudio.com/wiki/Grove_-_Loudness_Sensor "技術情報")

これは，スターターキットに入っている音センサと違い，環境音の大小を計測するためのもの．
Wikiのサンプルプログラムは問題なく動作した．

## 位置や動作関係

### 3軸デジタルコンパス
* [製品情報](http://www.seeedstudio.com/depot/Grove-3Axis-Digital-Compass-p-759.html "製品情報")
* [技術情報](http://www.seeedstudio.com/wiki/Grove_-_3-Axis_Compass_V1.0 "技術情報")
* [Suliライブラリ](https://github.com/Seeed-Studio/Digital_Compass_Suli "Suliライブラリ")
* [ノーマルライブラリ](https://github.com/Seeed-Studio/Grove_3Axis_Digital_Compass "ノーマルライブラリ")

3軸デジタルコンパスは，githubにライブラリが2種類存在し，
違いがよくわからない．とりあえず，ノーマルライブラリの
exapmleを使って動作を
確認した．

なお，テストに用いたプログラムはSerialの通信速度を
9600に落とした．

### 3軸デジタル加速度センサ(H3LI331DL)
* [製品情報](http://www.seeedstudio.com/depot/Grove-3Axis-Digital-Accelerometer400g-p-1897.html?cPath=25_132 "製品情報")
* [技術情報](http://www.seeedstudio.com/wiki/Grove_-_3-Axis_Digital_Accelerometer "技術情報")
* [ライブラリ](https://github.com/Seeed-Studio/Accelerometer_H3LIS331DL "ライブラリ")

なぜだか，ライブラリ提供のセンサの初期化機能が失敗するため動作確認できない
(というか，新品なのに壊れている?)．

### 3軸デジタル加速度センサ(ADXL345)
* [製品情報](http://www.seeedstudio.com/depot/Grove-3Axis-Digital-Accelerometer16g-p-1156.html?cPath=25_132 "製品情報")
* [技術情報](http://www.seeedstudio.com/wiki/Grove_-_3-Axis_Digital_Accelerometer_ADXL345 "技術情報")
* [ライブラリ](https://github.com/Seeed-Studio/Accelerometer_ADXL345 "ライブラリ")

ライブラリのサンプルプログラムは素直に動作した．

他にも以下のようなライブラリがある．
* [Suliライブラリ](https://github.com/Seeed-Studio/ACC_Adxl345_Suli "Suliライブラリ")
* [ジェスチャ認識ライブラリ](https://github.com/Seeed-Studio/Gesture_Recognition "ジェスチャ認識ライブラリ")
* [ゲームライブラリ](https://github.com/Seeed-Studio/Rainbowduino_Snake_Game "ゲームライブラリ")

### I2C 3軸デジタル加速度センサ
* [製品情報](
http://www.seeedstudio.com/depot/Grove-3Axis-Digital-Accelerometer15g-p-765.html
"製品情報")
* [技術情報](
http://www.seeedstudio.com/wiki/Grove_-_3-Axis_Digital_Accelerometer(%C2%B11.5g)
"技術情報")
* [ライブラリ](
https://github.com/Seeed-Studio/Accelerometer_MMA7660
"ライブラリ")

ライブラリ付属のサンプルプログラムで動作は確認できた．

### I2C 3軸ジャイロセンサ
* [製品情報](http://www.seeedstudio.com/depot/Grove-3Axis-Digital-Gyro-p-750.html "製品情報")
* [技術情報](http://www.seeedstudio.com/wiki/Grove_-_3-Axis_Digital_Gyro "技術情報")
* [ライブラリ](https://github.com/Seeed-Studio/Grove_3_Axis_Digital_Gyro "ライブラリ")

ライブラリのサンプルプログラムは素直に動作した．

### 1軸ジャイロセンサ
* [製品情報](http://www.seeedstudio.com/depot/Grove-Single-Axis-Analog-Gyro-p-1451.html?cPath=25_133 "製品情報")
* [技術情報](http://www.seeedstudio.com/wiki/Grove_-_Single_Axis_Analog_Gyro "技術情報")
* [サンプルプログラム](https://github.com/Seeed-Studio/Grove_Single_Axis_Analog_Gyro "サンプルプログラム")

githubにライブラリではなく，サンプルプログラムだけが公開されている．


### ロータリーエンコーダ
* [製品情報](http://www.seeedstudio.com/depot/Grove-Encoder-p-1352.html "製品情報")
* [技術情報](http://www.seeedstudio.com/wiki/Grove_-_Encoder "技術情報")
* [ライブラリ](http://www.seeedstudio.com/wiki/File:Encoder.zip "ライブラリ")

ライブラリはgithub上では見つけられず，wikiの添付ファイルだけが
存在しているもよう．ライブラリ上のサンプルプログラムは
以下のライブラリを内部で使っているため，同時に
インストールする必要がある．

* [TimerOneライブラリ](http://www.seeedstudio.com/wiki/File:TimerOne.zip "TimerOneライブラリ")

エンコーダのサンプルプログラムはエンコーダを取り付ける場所を
指定する部分がなく，デジタル2番の端子につけるしかないため，
ライブラリを改造したくなる．


## ユーザインタフェース

### I2Cタッチセンサ
* [製品情報](http://www.seeedstudio.com/depot/Grove-I2C-Touch-Sensor-p-840.html "製品情報")
* [技術情報](http://www.seeedstudio.com/wiki/Grove_-_I2C_Touch_Sensor "技術情報")
* [ライブラリ](https://github.com/Seeed-Studio/Grove_I2C_Touch_Sensor "ライブラリ")

ライブラリ提供のサンプルプログラムはどれかのセンサに触れないとなにも出力されないため，
自分で使う際は注意(かならず触る)．

### 親指ジョイスティック
* [製品情報](http://www.seeedstudio.com/depot/Grove-Thumb-Joystick-p-935.html "製品情報")
* [技術情報](http://www.seeedstudio.com/wiki/Grove_-_Thumb_Joystick "技術情報")

Wikiのサンプルプログラムは変更など必要なく，素直に動作した．


## 表示関係
### LEDバー

* [製品情報](http://www.seeedstudio.com/depot/Grove-LED-Bar-p-1178.html "製品情報")
* [技術情報](http://www.seeedstudio.com/wiki/Grove_-_LED_Bar "技術情報")
* [ライブラリ](https://github.com/Seeed-Studio/Grove_LED_Bar "ライブラリ")

ライブラリのWaveというサンプルプログラムで試してみたが，
サンプルプログラムは
関数への引数の型の問題でコンパイル
エラーになる．とりあえず，キャストで
無理やりコンパイルできるようにしたところ動作した．

標準以外のライブラリには以下の様なものもある．

* [Suliライブラリ](https://github.com/Seeed-Studio/LED_Bar_Suli "Suliライブラリ")


### 赤色LED
* [製品情報](http://www.seeedstudio.com/depot/Grove-Red-LED-p-1142.html "製品情報")
* [技術情報](http://www.seeedstudio.com/wiki/Grove_-_LED "技術情報")

スターターキットに入っているLEDソケットと同じ(赤色LEDが添付されているところが違い)
である．

### サークル型LED
* [製品情報](
http://www.seeedstudio.com/depot/Grove-Circular-LED-p-1353.html?cPath=81_35
"製品情報")
* [技術情報](
http://www.seeedstudio.com/wiki/Grove_-_Circular_LED
"技術情報")
* [ライブラリ](
http://www.seeedstudio.com/wiki/File:CircularLED.zip
"ライブラリ")

ライブラリは技術情報のWikiにしかない．
また，ライブラリに添付のサンプルプログラムは
サークル型LEDが2つ必要なことと，
grove用のシールド基板では使えない端子を
使っていたため，その部分は変更．

### RGB LED
* [製品情報](http://www.seeedstudio.com/depot/Grove-Chainable-RGB-LED-p-850.html "製品情報")
* [技術情報](http://www.seeedstudio.com/wiki/index.php?title=Twig_-_Chainable_RGB_LED "技術情報")
* [ライブラリ](https://github.com/Seeed-Studio/Grove_Chainable_RGB_LED "ライブラリ")

ライブラリ付属の「CycleThroughColors」を改造したもので動作を確認．

### 7セグメント4桁ディスプレイ
* [製品情報](
http://www.seeedstudio.com/depot/Grove-4Digit-Display-p-1198.html
"製品情報")
* [技術情報](
http://www.seeedstudio.com/wiki/Grove_-_4-Digit_Display
"技術情報")
* [ライブラリ](
https://github.com/Seeed-Studio/Grove_4Digital_Display
"ライブラリ")

* [Suliライブラリ](
https://github.com/Seeed-Studio/Four_Digit_Display_Suli
"Suliライブラリ")

ライブラリ付属のサンプルプログラムの一部にはTimerOneライブラリも必要．
動作確認はTimerOneが不要な「NumberFlow」で実施．



## 環境関係

### I2C 気圧センサ(BMP180)

* [製品情報](http://www.seeedstudio.com/depot/Grove-Barometer-Sensor-BMP180-p-1840.html?cPath=25_124 "製品情報")
* [技術情報](http://www.seeedstudio.com/wiki/Grove_-_Barometer_Sensor_(BMP180) "技術情報")
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
* [製品情報](http://www.seeedstudio.com/depot/Grove-Digital-Light-Sensor-p-1281.html?cPath=25_128 "製品情報")
* [技術情報](http://www.seeedstudio.com/wiki/Grove_-_Digital_Light_Sensor "技術情報")
* [ライブラリ](https://github.com/Seeed-Studio/Grove_Digital_Light_Sensor "ライブラリ")

技術情報のWikiにはなにも書かれていないが，githubには
「Groveデジタル光センサ」と名前がつけられたプロジェクトが
存在したため，そちらで動作を試みたところ動作するようである．


### デジタル温度・湿度センサ pro
* [製品情報](http://www.seeedstudio.com/depot/Grove-TemperatureHumidity-Sensor-Pro-p-838.html "製品情報")
* [技術情報](http://www.seeedstudio.com/wiki/Grove_-_Temperature_and_Humidity_Sensor_Pro "技術情報")
* [ライブラリ](https://github.com/Seeed-Studio/Grove_Temperature_And_Humidity_Sensor "ライブラリ")

このモジュールに搭載されているのは，DHT22/AM2302なので，通常のarduino用の
ライブラリでも動作する．実際に動作確認した際には以下のライブラリと
ライブラリ付属のサンプルプログラムで実施．

* [Arduion-DHTライブラリ](https://github.com/markruys/arduino-DHT "Arduino-DHTライブラリ")

Wikiの標準のライブラリを使った例の説明では，アナログポートにモジュールを接続するよう
記述されているが，Arduino-DHTライブラリはデジタル端子でも動作するため，
動作テストはデジタル端子の4に接続した．

### デジタル温度・湿度センサ
* [製品情報](http://www.seeedstudio.com/wiki/Grove-_Temperature_and_Humidity_Sensor "製品情報")
* [技術情報](http://www.seeedstudio.com/wiki/Grove-_Temperature_and_Humidity_Sensor "技術情報")
* [ライブラリ](https://github.com/Seeed-Studio/Grove_Temperature_And_Humidity_Sensor "ライブラリ")

このモジュールに搭載されているのは，DHT11なので，通常のarduino用の
ライブラリでも動作する．実際に動作確認した際には以下のライブラリと
ライブラリ付属のサンプルプログラムで実施．

* [Arduion-DHTライブラリ](https://github.com/markruys/arduino-DHT "Arduino-DHTライブラリ")

他にも次のようなライブラリが公開されている．ただし，Suliライブラリはなぜか
README.mdが別のモジュールのものが貼られている．
* [Suliライブラリ](https://github.com/Seeed-Studio/Temp_Hmi_Suli "Suliライブラリ")



## その他

### RTC
* [製品情報]( http://www.seeedstudio.com/depot/Grove-RTC-p-758.html?cPath=25_131 "製品情報")
* [技術情報]( http://www.seeedstudio.com/wiki/Grove_-_RTC "技術情報")
* [ライブラリ]( https://github.com/Seeed-Studio/RTC_DS1307 "ライブラリ")

動作の確認はライブラリ添付のサンプルプログラムで実施(「SetTimeAndDisplay」)．
githubには別の種類のライブラリも存在．

* [Suliライブラリ]( https://github.com/Seeed-Studio/RTC_DS1307_Suli "Suliライブラリ")

## なんとかセンサ類
### なんちやらセンサ
### なんちやらセンサ
### なんちやらセンサ

## 調査中
### スピーカー
* [製品情報](
http://www.seeedstudio.com/depot/Grove-Speaker-p-1445.html
"製品情報")
* [技術情報](
http://www.seeedstudio.com/wiki/Grove_-_Speaker
"技術情報")

### ラインファインダ
* [製品情報](
http://www.seeedstudio.com/depot/Grove-Line-Finder-p-825.html
"製品情報")
* [技術情報](
http://www.seeedstudio.com/wiki/index.php?title=Twig_-_Line_Finder
"技術情報")

### 光センサ(パネルタイプ)
* [製品情報](
http://www.seeedstudio.com/depot/Grove-Light-SensorP-p-1253.html
"製品情報")
* [技術情報](
http://www.seeedstudio.com/wiki/Grove_-_Light_Sensor
"技術情報")

中身はスターターキットの光センサと同じなので省略

### 3軸アナログ加速度センサ
* [製品情報](
http://www.seeedstudio.com/depot/Grove-3Axis-Analog-Accelerometer-p-1086.html
"製品情報")
* [技術情報](
http://www.seeedstudio.com/wiki/Breakout_-_3-Axis_Analog_Accelerometer_ADXL335
"技術情報")
* [ライブラリ](
https://github.com/Seeed-Studio/Accelerometer_ADXL335
"ライブラリ")

ライブラリはデジタル版のモジュールと同じ．


### 
赤外線受信機

* [製品情報](
http://www.seeedstudio.com/depot/Grove-Infrared-Receiver-p-994.html"製品情報")
* [技術情報](
http://www.seeedstudio.com/wiki/Grove_-_Infrared_Receiver
"技術情報")
* [ライブラリ](
https://github.com/Seeed-Studio/IRSendRev
"ライブラリ")

* [ライブラリ](
https://github.com/Seeed-Studio/MagicBracelet
"ライブラリ")

### 
磁気スイッチ

* [製品情報](
http://www.seeedstudio.com/depot/Grove-Magnetic-Switch-p-744.html
"製品情報")
* [技術情報](
http://www.seeedstudio.com/wiki/index.php?title=Twig_-_Magnetic_Switch
"技術情報")
* [ライブラリ](
https://github.com/Seeed-Studio/Magnetic_Switch
"ライブラリ")

### 
ボタン

* [製品情報](
http://www.seeedstudio.com/depot/Grove-Button-p-766.html
"製品情報")
* [技術情報](
http://www.seeedstudio.com/wiki/Grove_-_Button
"技術情報")
* [ライブラリ](

"ライブラリ")

### 
電流センサ

* [製品情報](
http://www.seeedstudio.com/depot/Grove-Electricity-Sensor-p-777.html?cPath=25_28
"製品情報")
* [技術情報](
http://garden.seeedstudio.com/index.php?title=Twig_-_Electricity_Sensor
"技術情報")
* [ライブラリ](

"ライブラリ")


### 
PIRモーションセンサ

* [製品情報](
http://www.seeedstudio.com/depot/Grove-PIR-Motion-Sensor-p-802.html
"製品情報")
* [技術情報](
http://garden.seeedstudio.com/index.php?title=Twig_-_PIR_Motion_Sensor
"技術情報")
* [ライブラリ](
https://github.com/Seeed-Studio/PIR_Motion_Sensor "ライブラリ")


### 
アルコールセンサ

* [製品情報](
http://www.seeedstudio.com/depot/Grove-Alcohol-Sensor-p-764.html
"製品情報")
* [技術情報](
http://www.seeedstudio.com/wiki/index.php?title=Twig_-_Alcohol_Sensor
"技術情報")
* [ライブラリ](
https://github.com/Seeed-Studio/Travelling_Mine
"ライブラリ")
* [ライブラリ](
https://github.com/Seeed-Studio/Air_Quality_Test_Box
"ライブラリ")
* [ライブラリ](
https://github.com/Seeed-Studio/Grove_Alcohol_Sensor "ライブラリ")

### 
I2C ADC

* [製品情報](
http://www.seeedstudio.com/depot/Grove-I2C-ADC-p-1580.html
"製品情報")
* [技術情報](
http://www.seeedstudio.com/wiki/Grove_-_I2C_ADC
"技術情報")
* [ライブラリ](
https://github.com/Seeed-Studio/I2C_ADC_Suli
"ライブラリ")

### 
GPS

* [製品情報](
http://www.seeedstudio.com/depot/Grove-GPS-p-959.html
"製品情報")
* [技術情報](
http://www.seeedstudio.com/wiki/Grove_-_GPS
"技術情報")
* [ライブラリ](

"ライブラリ")

### 
水センサ

* [製品情報](
http://www.seeedstudio.com/depot/Grove-Water-Sensor-p-748.html?cPath=25_27
"製品情報")
* [技術情報](
http://garden.seeedstudio.com/index.php?title=Twig_-_Water_Sensor
"技術情報")
* [ライブラリ](
https://github.com/Seeed-Studio/Grove_Water_Sensor
"ライブラリ")

### 
赤外線反射センサ

* [製品情報](
http://www.seeedstudio.com/depot/Grove-Infrared-Reflective-Sensor-p-1230.html?cPath=25_31
"製品情報")
* [技術情報](
http://www.seeedstudio.com/wiki/Grove_-_Infrared_Reflective_Sensor
"技術情報")
* [ライブラリ](

"ライブラリ")

### 
赤外線距離センサ

* [製品情報](
http://www.seeedstudio.com/depot/Grove-IR-Distance-Interrupter-p-1278.html
"製品情報")
* [技術情報](
http://www.seeedstudio.com/wiki/Grove_-_IR_Distance_Interrupt
"技術情報")
* [ライブラリ](
https://github.com/Seeed-Studio/Grove_IR_Distance_Sensor
"ライブラリ")

### 
スイッチ(P)

* [製品情報](
http://www.seeedstudio.com/depot/Grove-SwitchP-p-1252.html
"製品情報")
* [技術情報](

"技術情報")
* [ライブラリ](

"ライブラリ")

### 
赤外線発信機

* [製品情報](
http://www.seeedstudio.com/depot/Grove-Infrared-Emitter-p-993.html
"製品情報")
* [技術情報](
http://www.seeedstudio.com/wiki/Grove_-_Infrared_Emitter
"技術情報")
* [ライブラリ](
https://github.com/Seeed-Studio/MagicBracelet
"ライブラリ")
* [ライブラリ](
https://github.com/Seeed-Studio/IRSendRev
"ライブラリ")

### 
水分センサ

* [製品情報](
http://www.seeedstudio.com/depot/Grove-Moisture-Sensor-p-955.html
"製品情報")
* [技術情報](
http://seeedstudio.com/wiki/Grove_-_Moisture_Sensor
"技術情報")
* [ライブラリ](
https://github.com/Seeed-Studio/Moisture_Sensor
"ライブラリ")


### 
シリアルカメラキット

* [製品情報](
http://www.seeedstudio.com/depot/Grove-Serial-Camera-Kit-p-1608.html
"製品情報")
* [技術情報](
http://www.seeedstudio.com/wiki/Grove_-_Serial_Camera_Kit
"技術情報")
* [ライブラリ](
https://github.com/Seeed-Studio/Grove_Serial_Camera_Kit
"ライブラリ")

### 
Ultrasonic Ranger

* [製品情報](
http://www.seeedstudio.com/depot/Grove-Ultrasonic-Ranger-p-960.html
"製品情報")
* [技術情報](
http://www.seeedstudio.com/wiki/Grove_-_Ultrasonic_Ranger
"技術情報")
* [ライブラリ](
https://github.com/Seeed-Studio/Grove_Ultrasonic_Ranger
"ライブラリ")


### 
スライドボリューム

* [製品情報](
http://www.seeedstudio.com/depot/Grove-Slide-Potentiometer-p-1196.html
"製品情報")
* [技術情報](
http://www.seeedstudio.com/wiki/Sliding_Potentiometer
"技術情報")
* [ライブラリ](

"ライブラリ")


### 
OLED display 1.12''

* [製品情報](
http://www.seeedstudio.com/depot/Grove-OLED-Display-112-p-781.html
"製品情報")
* [技術情報](
http://www.seeedstudio.com/wiki/Grove_-_OLED_Display_128*64
"技術情報")
* [ライブラリ](
https://github.com/Seeed-Studio/OLED_128x64_Suli
"ライブラリ")
* [ライブラリ](
https://github.com/Seeed-Studio/Travelling_Mine
"ライブラリ")
* [ライブラリ](
https://github.com/Seeed-Studio/Air_Quality_Test_Box
"ライブラリ")
* [ライブラリ](
https://github.com/Seeed-Studio/OLED_Display_128X64
"ライブラリ")


### 
Serial MP3 Player

* [製品情報](
http://www.seeedstudio.com/depot/Grove-Serial-MP3-Player-p-1542.html
"製品情報")
* [技術情報](
http://www.seeedstudio.com/wiki/Grove_%E2%80%93_Serial_MP3_Player
"技術情報")
* [ライブラリ](
https://github.com/Seeed-Studio/Grove_Serial_MP3_Player
"ライブラリ")

### 
ボリューム(パネルタイプ)

* [製品情報](
http://www.seeedstudio.com/depot/Grove-Rotary-Angle-SensorP-p-1242.html
"製品情報")
* [技術情報](
http://www.seeedstudio.com/wiki/Grove_-_Rotary_Angle_Sensor
"技術情報")
* [ライブラリ](
https://github.com/Seeed-Studio/Rotary_Angle_Sensor
"ライブラリ")

### 
端子台

* [製品情報](
http://www.seeedstudio.com/depot/Grove-Screw-Terminal-p-996.html
"製品情報")
* [技術情報](
http://www.seeedstudio.com/wiki/Grove_-_Screw_Terminal
"技術情報")
* [ライブラリ](

"ライブラリ")

### 
ボリューム

* [製品情報](
http://www.seeedstudio.com/depot/Grove-Rotary-Angle-Sensor-p-770.html?cPath=85_52
"製品情報")
* [技術情報](
http://www.seeedstudio.com/wiki/Grove_-_Rotary_Angle_Sensor
"技術情報")
* [ライブラリ](
https://github.com/Seeed-Studio/Rotary_Angle_Sensor
"ライブラリ")

### 
I2Cハブ

* [製品情報](
http://www.seeedstudio.com/depot/Grove-I2C-Hub-p-851.html
"製品情報")
* [技術情報](
http://garden.seeedstudio.com/index.php?title=Twig_-_I2C_Hub
"技術情報")
* [ライブラリ](

"ライブラリ")

### 
火炎センサ

* [製品情報](
http://www.seeedstudio.com/depot/Grove-Flame-Sensor-p-1450.html"製品情報")
* [技術情報](
http://www.seeedstudio.com/wiki/Grove_-_Flame_Sensor
"技術情報")
* [ライブラリ](
https://github.com/Seeed-Studio/Grove_Flame_Sensor
"ライブラリ")

### 
GSR

* [製品情報](
http://www.seeedstudio.com/depot/Grove-GSR-sensor-p-1614.html
"製品情報")
* [技術情報](
http://www.seeedstudio.com/wiki/Grove_-_GSR_Sensor
"技術情報")
* [ライブラリ](

"ライブラリ")


### 
Xbee Carrier

* [製品情報](
http://www.seeedstudio.com/depot/Grove-XBee-Carrier-p-905.html
"製品情報")
* [技術情報](
http://garden.seeedstudio.com/index.php?title=Bee_Stem"技術情報")
* [ライブラリ](

"ライブラリ")


### 
チルトスイッチ

* [製品情報](
http://www.seeedstudio.com/depot/Grove-Tilt-Switch-p-771.html
"製品情報")
* [技術情報](
http://www.seeedstudio.com/wiki/Grove_-_Tilt_Switch
"技術情報")
* [ライブラリ](

"ライブラリ")





