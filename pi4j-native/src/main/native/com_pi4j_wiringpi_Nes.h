/*
 * #%L
 * **********************************************************************
 * ORGANIZATION  :  Pi4J
 * PROJECT       :  Pi4J :: JNI Native Library
 * FILENAME      :  com_pi4j_wiringpi_Nes.h
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
/* Header for class com_pi4j_wiringpi_Nes */

#ifndef _Included_com_pi4j_wiringpi_Nes
#define _Included_com_pi4j_wiringpi_Nes
#ifdef __cplusplus
extern "C" {
#endif
#undef com_pi4j_wiringpi_Nes_NES_RIGHT
#define com_pi4j_wiringpi_Nes_NES_RIGHT 1L
#undef com_pi4j_wiringpi_Nes_NES_LEFT
#define com_pi4j_wiringpi_Nes_NES_LEFT 2L
#undef com_pi4j_wiringpi_Nes_NES_DOWN
#define com_pi4j_wiringpi_Nes_NES_DOWN 4L
#undef com_pi4j_wiringpi_Nes_NES_UP
#define com_pi4j_wiringpi_Nes_NES_UP 8L
#undef com_pi4j_wiringpi_Nes_NES_START
#define com_pi4j_wiringpi_Nes_NES_START 16L
#undef com_pi4j_wiringpi_Nes_NES_SELECT
#define com_pi4j_wiringpi_Nes_NES_SELECT 32L
#undef com_pi4j_wiringpi_Nes_NES_B
#define com_pi4j_wiringpi_Nes_NES_B 64L
#undef com_pi4j_wiringpi_Nes_NES_A
#define com_pi4j_wiringpi_Nes_NES_A 128L
#undef com_pi4j_wiringpi_Nes_PULSE_TIME
#define com_pi4j_wiringpi_Nes_PULSE_TIME 25L
#undef com_pi4j_wiringpi_Nes_MAX_NES_JOYSTICKS
#define com_pi4j_wiringpi_Nes_MAX_NES_JOYSTICKS 8L
/*
 * Class:     com_pi4j_wiringpi_Nes
 * Method:    setupNesJoystick
 * Signature: (III)I
 */
JNIEXPORT jint JNICALL Java_com_pi4j_wiringpi_Nes_setupNesJoystick
  (JNIEnv *, jclass, jint, jint, jint);

/*
 * Class:     com_pi4j_wiringpi_Nes
 * Method:    readNesJoystick
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_com_pi4j_wiringpi_Nes_readNesJoystick
  (JNIEnv *, jclass, jint);

#ifdef __cplusplus
}
#endif
#endif
