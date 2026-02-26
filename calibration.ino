// ===== SENSOR 1 =====
void calibrationd(){
sensor.setBlackMin(10, 25, 10);
sensor.setBlackMax(20*1.2, 35*1.2, 20*1.2);
sensor.setGreenMin(0, 100, 0);
sensor.setGreenMax(50, 255, 50);
sensor.setRedMin(100, 0, 0);
sensor.setRedMax(255, 50, 50);
sensor.setWhiteMin(270*0.9, 230*0.9, 200*0.9);
sensor.setWhiteMax(320, 285, 230);
sensor.setSilverMin(180, 180, 180);
sensor.setSilverMax(230, 230, 230);


// ===== SENSOR 2 =====
sensor2.setBlackMin(40, 65, 50);
sensor2.setBlackMax(190*1.2, 120*1.2, 95*1.2);
sensor2.setGreenMin(0, 100, 0);
sensor2.setGreenMax(50, 255, 50);
sensor2.setRedMin(100, 0, 0);
sensor2.setRedMax(255, 50, 50);
sensor2.setWhiteMin(280*0.9, 320*0.9, 220*0.9);
sensor2.setWhiteMax(440, 465, 345);
sensor2.setSilverMin(180, 180, 180);
sensor2.setSilverMax(230, 230, 230);


// ===== SENSOR 3 =====
sensor3.setBlackMin(30, 30, 20);
sensor3.setBlackMax(160*1.2, 100*1.2, 140*1.2);
sensor3.setGreenMin(0, 100, 0);
sensor3.setGreenMax(50, 255, 50);
sensor3.setRedMin(100, 0, 0);
sensor3.setRedMax(255, 50, 50);
sensor3.setWhiteMin(220*0.9, 200*0.9, 165*0.9);
sensor3.setWhiteMax(300, 250, 215);
sensor3.setSilverMin(180, 180, 180);
sensor3.setSilverMax(230, 230, 230);


// ===== SENSOR 4 =====
sensor4.setBlackMin(80, 120, 50);
sensor4.setBlackMax(300*1.2, 300*1.2, 220*1.2);
sensor4.setGreenMin(0, 100, 0);
sensor4.setGreenMax(50, 255, 50);
sensor4.setRedMin(100, 0, 0);
sensor4.setRedMax(255, 50, 50);
sensor4.setWhiteMin(500*0.9, 600*0.9, 360*0.9);
sensor4.setWhiteMax(710, 780, 450);
sensor4.setSilverMin(180, 180, 180);
sensor4.setSilverMax(230, 230, 230);
}