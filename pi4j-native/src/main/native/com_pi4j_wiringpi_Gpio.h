/*
 * #%L
 * **********************************************************************
 * ORGANIZATION  :  Pi4J
 * PROJECT       :  Pi4J :: JNI Native Library
 * FILENAME      :  com_pi4j_wiringpi_Gpio.h
 * 
 * This file is part of the Pi4J project. More information about
 * this project can be found here:  https://www.pi4j.com/
 * **********************************************************************
 * %%
 * Copyright (C) 2012 - 2021 Pi4J
 * %%
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as
 * published by the Free Software Foundation, either version 3 of the
 * License, or (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Lesser Public License for more details.
 * 
 * You should have received a copy of the GNU General Lesser Public
 * License along with this program.  If not, see
 * <http://www.gnu.org/licenses/lgpl-3.0.html>.
 * #L%
 */
/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_pi4j_wiringpi_Gpio */

#ifndef _Included_com_pi4j_wiringpi_Gpio
#define _Included_com_pi4j_wiringpi_Gpio
#ifdef __cplusplus
extern "C" {
#endif
#undef com_pi4j_wiringpi_Gpio_NUM_PINS
#define com_pi4j_wiringpi_Gpio_NUM_PINS 46L
#undef com_pi4j_wiringpi_Gpio_INPUT
#define com_pi4j_wiringpi_Gpio_INPUT 0L
#undef com_pi4j_wiringpi_Gpio_OUTPUT
#define com_pi4j_wiringpi_Gpio_OUTPUT 1L
#undef com_pi4j_wiringpi_Gpio_PWM_OUTPUT
#define com_pi4j_wiringpi_Gpio_PWM_OUTPUT 2L
#undef com_pi4j_wiringpi_Gpio_GPIO_CLOCK
#define com_pi4j_wiringpi_Gpio_GPIO_CLOCK 3L
#undef com_pi4j_wiringpi_Gpio_LOW
#define com_pi4j_wiringpi_Gpio_LOW 0L
#undef com_pi4j_wiringpi_Gpio_HIGH
#define com_pi4j_wiringpi_Gpio_HIGH 1L
#undef com_pi4j_wiringpi_Gpio_PUD_OFF
#define com_pi4j_wiringpi_Gpio_PUD_OFF 0L
#undef com_pi4j_wiringpi_Gpio_PUD_DOWN
#define com_pi4j_wiringpi_Gpio_PUD_DOWN 1L
#undef com_pi4j_wiringpi_Gpio_PUD_UP
#define com_pi4j_wiringpi_Gpio_PUD_UP 2L
#undef com_pi4j_wiringpi_Gpio_PWM_MODE_BAL
#define com_pi4j_wiringpi_Gpio_PWM_MODE_BAL 1L
#undef com_pi4j_wiringpi_Gpio_PWM_MODE_MS
#define com_pi4j_wiringpi_Gpio_PWM_MODE_MS 0L
#undef com_pi4j_wiringpi_Gpio_ALT0
#define com_pi4j_wiringpi_Gpio_ALT0 4L
#undef com_pi4j_wiringpi_Gpio_ALT1
#define com_pi4j_wiringpi_Gpio_ALT1 5L
#undef com_pi4j_wiringpi_Gpio_ALT2
#define com_pi4j_wiringpi_Gpio_ALT2 6L
#undef com_pi4j_wiringpi_Gpio_ALT3
#define com_pi4j_wiringpi_Gpio_ALT3 7L
#undef com_pi4j_wiringpi_Gpio_ALT4
#define com_pi4j_wiringpi_Gpio_ALT4 3L
#undef com_pi4j_wiringpi_Gpio_ALT5
#define com_pi4j_wiringpi_Gpio_ALT5 2L
#undef com_pi4j_wiringpi_Gpio_INT_EDGE_SETUP
#define com_pi4j_wiringpi_Gpio_INT_EDGE_SETUP 0L
#undef com_pi4j_wiringpi_Gpio_INT_EDGE_FALLING
#define com_pi4j_wiringpi_Gpio_INT_EDGE_FALLING 1L
#undef com_pi4j_wiringpi_Gpio_INT_EDGE_RISING
#define com_pi4j_wiringpi_Gpio_INT_EDGE_RISING 2L
#undef com_pi4j_wiringpi_Gpio_INT_EDGE_BOTH
#define com_pi4j_wiringpi_Gpio_INT_EDGE_BOTH 3L
/*
 * Class:     com_pi4j_wiringpi_Gpio
 * Method:    wiringPiSetup
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_pi4j_wiringpi_Gpio_wiringPiSetup
  (JNIEnv *, jclass);

/*
 * Class:     com_pi4j_wiringpi_Gpio
 * Method:    wiringPiSetupSys
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_pi4j_wiringpi_Gpio_wiringPiSetupSys
  (JNIEnv *, jclass);

/*
 * Class:     com_pi4j_wiringpi_Gpio
 * Method:    wiringPiSetupGpio
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_pi4j_wiringpi_Gpio_wiringPiSetupGpio
  (JNIEnv *, jclass);

/*
 * Class:     com_pi4j_wiringpi_Gpio
 * Method:    wiringPiSetupPhys
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_pi4j_wiringpi_Gpio_wiringPiSetupPhys
  (JNIEnv *, jclass);

/*
 * Class:     com_pi4j_wiringpi_Gpio
 * Method:    pinMode
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_com_pi4j_wiringpi_Gpio_pinMode
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     com_pi4j_wiringpi_Gpio
 * Method:    pinModeAlt
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_com_pi4j_wiringpi_Gpio_pinModeAlt
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     com_pi4j_wiringpi_Gpio
 * Method:    pullUpDnControl
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_com_pi4j_wiringpi_Gpio_pullUpDnControl
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     com_pi4j_wiringpi_Gpio
 * Method:    digitalWrite
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_com_pi4j_wiringpi_Gpio_digitalWrite
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     com_pi4j_wiringpi_Gpio
 * Method:    pwmWrite
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_com_pi4j_wiringpi_Gpio_pwmWrite
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     com_pi4j_wiringpi_Gpio
 * Method:    digitalRead
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_com_pi4j_wiringpi_Gpio_digitalRead
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_pi4j_wiringpi_Gpio
 * Method:    analogRead
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_com_pi4j_wiringpi_Gpio_analogRead
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_pi4j_wiringpi_Gpio
 * Method:    analogWrite
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_com_pi4j_wiringpi_Gpio_analogWrite
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     com_pi4j_wiringpi_Gpio
 * Method:    delay
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_pi4j_wiringpi_Gpio_delay
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_pi4j_wiringpi_Gpio
 * Method:    millis
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_com_pi4j_wiringpi_Gpio_millis
  (JNIEnv *, jclass);

/*
 * Class:     com_pi4j_wiringpi_Gpio
 * Method:    micros
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_com_pi4j_wiringpi_Gpio_micros
  (JNIEnv *, jclass);

/*
 * Class:     com_pi4j_wiringpi_Gpio
 * Method:    delayMicroseconds
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_pi4j_wiringpi_Gpio_delayMicroseconds
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_pi4j_wiringpi_Gpio
 * Method:    piHiPri
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_com_pi4j_wiringpi_Gpio_piHiPri
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_pi4j_wiringpi_Gpio
 * Method:    waitForInterrupt
 * Signature: (II)I
 */
JNIEXPORT jint JNICALL Java_com_pi4j_wiringpi_Gpio_waitForInterrupt
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     com_pi4j_wiringpi_Gpio
 * Method:    _wiringPiISR
 * Signature: (II)I
 */
JNIEXPORT jint JNICALL Java_com_pi4j_wiringpi_Gpio__1wiringPiISR
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     com_pi4j_wiringpi_Gpio
 * Method:    piBoardRev
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_pi4j_wiringpi_Gpio_piBoardRev
  (JNIEnv *, jclass);

/*
 * Class:     com_pi4j_wiringpi_Gpio
 * Method:    wpiPinToGpio
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_com_pi4j_wiringpi_Gpio_wpiPinToGpio
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_pi4j_wiringpi_Gpio
 * Method:    physPinToGpio
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_com_pi4j_wiringpi_Gpio_physPinToGpio
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_pi4j_wiringpi_Gpio
 * Method:    digitalWriteByte
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_pi4j_wiringpi_Gpio_digitalWriteByte
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_pi4j_wiringpi_Gpio
 * Method:    pwmSetMode
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_pi4j_wiringpi_Gpio_pwmSetMode
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_pi4j_wiringpi_Gpio
 * Method:    pwmSetRange
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_pi4j_wiringpi_Gpio_pwmSetRange
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_pi4j_wiringpi_Gpio
 * Method:    pwmSetClock
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_pi4j_wiringpi_Gpio_pwmSetClock
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_pi4j_wiringpi_Gpio
 * Method:    setPadDrive
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_com_pi4j_wiringpi_Gpio_setPadDrive
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     com_pi4j_wiringpi_Gpio
 * Method:    getAlt
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_com_pi4j_wiringpi_Gpio_getAlt
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_pi4j_wiringpi_Gpio
 * Method:    gpioClockSet
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_com_pi4j_wiringpi_Gpio_gpioClockSet
  (JNIEnv *, jclass, jint, jint);

#ifdef __cplusplus
}
#endif
#endif
