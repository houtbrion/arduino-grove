# seeed studio grove systemのArduino用サンプルプログラム集


## 目的
* seeed studioのwikiに公開されている各種サンプルプログラムをgitでまとめて管理できるようにする．
* 1つのgroveモジュールに対して，1つのプログラムが対応するように整理し直す． (一部のサンプルプログラムは複数のモジュールに依存しているため)


## モジュールと参考情報URL


### Grove - Starter Kit for Arduino
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

#### Grove - LCD RGB Backlight
* [製品情報](http://www.seeedstudio.com/depot/Grove-LCD-RGB-Backlight-p-1643.html?cPath=34_36 "製品情報")
* [サンプルプログラム](http://www.seeedstudio.com/wiki/Grove\_-\_LCD\_RGB\_Backlight "サンプルプログラム")
* [ライブラリ](https://github.com/Seeed-Studio/Grove\_LCD\_RGB\_Backlight "ライブラリ")

Seeed Studioがgithubで公開しているライブラリに含まれるサンプルプログラム「Blink」で動作確認．
LCDはシールドのI2Cに接続することで利用可能．

#### Grove - Smart Relay
* [製品情報](http://www.seeedstudio.com/depot/grove-relay-p-769.html?cPath=156\_160 "製品情報")
* [サンプルプログラム](http://www.seeedstudio.com/wiki/Grove\_-\_Relay "サンプルプログラム")

元々のWikiのサンプルプログラムは，デジタル1,2番に2つボタンをつけて,6番にリレーをつける．
2つのボタンを交互に押すとリレーがON/OFFされる．しかし，シールドにはデジタルの1番はないことと
スターターキットにはボタンは1つしかないため，2番に接続したボタンを押している間だけリレーが
ONになるように変更．

#### Grove - Buzzer
* [製品情報](http://www.seeedstudio.com/depot/grove-buzzer-p-768.html?cPath=156\_159 "製品情報")
* [サンプルプログラム](http://www.seeedstudio.com/wiki/Grove\_-\_Buzzer "サンプルプログラム")

テストプログラムは，一定時間間隔でブザーがなるだけのプログラム．
結構うるさい :-P

#### Grove - Sound Sensor
* [製品情報](http://www.seeedstudio.com/depot/grove-sound-sensor-p-752.html?cPath=144\_148 "製品情報")
* [サンプルプログラム](http://www.seeedstudio.com/wiki/index.php?title=Twig\_-\_Sound\_Sensor "サンプルプログラム")

Wikiのサンプルプログラムはデジタル3番ピンにLED, アナログ0番に音センサを繋いで使う．
センサモジュール上のマイクに向かって喋るとLEDが光る．

#### Grove - Touch Sensor
* [製品情報](http://www.seeedstudio.com/depot/grove-touch-sensor-p-747.html?cPath=156\_160 "製品情報")
* [サンプルプログラム](http://www.seeedstudio.com/wiki/index.php?title=Twig\_-\_Touch\_Sensor "サンプルプログラム")

プログラムはタッチセンサに触れるとLEDが光る仕組み．

Wikiのサンプルプログラムは
LEDをデジタルの12番，タッチセンサをデジタルの9番に接続するようになっているが，groveのシールドは
デジタルは2から8までしかないので，LEDをD3,センサをD8に接続するように変更．

#### Grove - Rotary Angle Sensor
* [製品情報](http://www.seeedstudio.com/depot/grove-rotary-angle-sensor-p-p-1242.html?cPath=156\_160 "製品情報")
* [サンプルプログラム](http://www.seeedstudio.com/wiki/Grove\_-\_Rotary\_Angle\_Sensor "サンプルプログラム")

Wikiのサンプルプログラムは，コメント欄にデジタル3番端子にLEDを接続して，アナログ0番にロータリーセンサをつける
ことになっているが，実際のプログラムはデジタル2番端子にLEDをつけるようになっている．
とりあえず，コメントに合わせてLEDの接続先は変更．

#### Grove - Temperature Sensor
* [製品情報](http://www.seeedstudio.com/depot/grove-temperature-sensor-p-774.html?cPath=144\_147 "製品情報")
* [サンプルプログラム](http://www.seeedstudio.com/wiki/Grove\_-\_Temperature\_Sensor\_V1.2 "サンプルプログラム")

Wikiのサンプルプログラムは，アナログの5番端子に接続して使うことになっているが，groveのシールドは0番から3番までしか
端子がないため，アナログ0番に接続端子を変更．

#### Grove - LED
* [製品情報](http://www.seeedstudio.com/depot/Grove-LED-p-767.html?cPath=81\_35 "製品情報")
* [サンプルプログラム](http://www.seeedstudio.com/wiki/index.php?title=GROVE\_-\_Starter\_Kit\_v1.1b#Grove\_-\_LED "サンプルプログラム")

Wikiのサンプルプログラムは，ボタンとLEDの2つのモジュールをシールドに刺して利用する．
ボタンを押している間だけLEDが点灯するプログラム．

モジュールを2つ使うのが面倒だったので，1秒間隔でLEDが点滅するプログラムに変更．

#### Grove - Light Sensor
* [製品情報](http://www.seeedstudio.com/depot/Grove-Light-Sensor-p-746.html?cPath=25\_27 "製品情報")
* [サンプルプログラム](http://www.seeedstudio.com/wiki/Grove\_-\_Light\_Sensor "サンプルプログラム")

Wikiのサンプルプログラムはデジタル12ピンにLEDをつけるようになっているが，LEDはなしで
動くようデジタル13番ピン(基板上のもの)に変更．

#### Grove - Button
* [製品情報](http://www.seeedstudio.com/depot/grove-button-p-766.html?cPath=156\_160 "製品情報")
* [サンプルプログラム](http://www.seeedstudio.com/wiki/Grove\_-\_Button "サンプルプログラム")

Wikiのサンプルプログラムの説明では，「デジタル13番ピンにLEDを挿して動作確認せよ」と書いてあるが，
デジタル13番ピンには基板上にLEDが付いているため，シールドの下に隠れていることを除けば
特にLEDを新たに接続する必要はない．

テスト的に実行した際には，LEDは接続せず，groveシールドの下に隠れているLEDが点滅するようすを
確認した．


### 音関係

#### 音量センサ
* [製品情報](http://www.seeedstudio.com/depot/Grove-Loudness-Sensor-p-1382.html "製品情報")
* [サンプルプログラム](http://www.seeedstudio.com/wiki/Grove_-_Loudness_Sensor "サンプルプログラム")

これは，スターターキットに入っている音センサと違い，環境音の大小を計測するためのもの．
Wikiのサンプルプログラムは問題なく動作した．

### 位置や動作関係

### 3軸デジタルコンパス
* [製品情報](http://www.seeedstudio.com/depot/Grove-3Axis-Digital-Compass-p-759.html "製品情報")
* [サンプルプログラム](http://www.seeedstudio.com/wiki/Grove_-_3-Axis_Compass_V1.0 "サンプルプログラム")
* [Suliライブラリ](https://github.com/Seeed-Studio/Digital_Compass_Suli "Suliライブラリ")
* [ノーマルライブラリ](https://github.com/Seeed-Studio/Grove_3Axis_Digital_Compass "ノーマルライブラリ")

3軸デジタルコンパスは，githubにライブラリが2種類存在し，
違いがよくわからない．とりあえず，ノーマルライブラリの
exapmleを使って動作を
確認した．

なお，テストに用いたプログラムはSerialの通信速度を
9600に落とした．

### 3軸デジタル加速度センサ
* [製品情報](http://www.seeedstudio.com/depot/Grove-3Axis-Digital-Accelerometer400g-p-1897.html?cPath=25\_132 "製品情報")
* [サンプルプログラム](http://www.seeedstudio.com/wiki/Grove\_-\_3-Axis\_Digital\_Accelerometer "サンプルプログラム")
* [ライブラリ](https://github.com/Seeed-Studio/Accelerometer\_H3LIS331DL "ライブラリ")

なぜだか，ライブラリ提供のセンサの初期化機能が失敗するため動作確認できない
(というか，新品なのに壊れている?)．


#### I2Cタッチセンサ
* [製品情報](http://www.seeedstudio.com/depot/Grove-I2C-Touch-Sensor-p-840.html "製品情報")
* [サンプルプログラム](http://www.seeedstudio.com/wiki/Grove\_-\_I2C\_Touch\_Sensor "サンプルプログラム")
* [ライブラリ](https://github.com/Seeed-Studio/Grove\_I2C\_Touch\_Sensor "ライブラリ")

ライブラリ提供のサンプルプログラムはどれかのセンサに触れないとなにも出力されないため，
自分で使う際は注意(かならず触る)．

### なんとかセンサ類
#### なんちやらセンサ

### なんとかセンサ類
#### なんちやらセンサ


* [製品情報](
"製品情報")
* [サンプルプログラム](
"サンプルプログラム")
* [ライブラリ](
"ライブラリ")



