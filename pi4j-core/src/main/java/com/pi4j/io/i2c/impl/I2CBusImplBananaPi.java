package com.pi4j.io.i2c.impl;

/*
 * #%L
 * **********************************************************************
 * ORGANIZATION  :  Pi4J
 * PROJECT       :  Pi4J :: Java Library (Core)
 * FILENAME      :  I2CBusImplBananaPi.java  
 * 
 * This file is part of the Pi4J project. More information about 
 * this project can be found here:  http://www.pi4j.com/
 * **********************************************************************
 * %%
 * Copyright (C) 2012 - 2015 Pi4J
 * %%
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *      http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 * #L%
 */

import java.io.IOException;
import java.util.concurrent.TimeUnit;

/**
 * This is implementation of i2c bus. This class keeps underlying linux file descriptor of
 * particular bus. As all reads and writes from/to i2c bus are blocked I/Os current implementation uses only 
 * one file per bus for all devices. Device implementations use this class file handle.
 * 
 * @author Daniel Sendula
 *
 */
public class I2CBusImplBananaPi extends I2CBusImpl {

	public static I2CBusImplBananaPi getBus(int busNumber,
    		long lockAquireTimeout, TimeUnit lockAquireTimeoutUnit)
    				throws UnsupportedBusNumberException, IOException {
		
		return (I2CBusImplBananaPi)
				I2CBusImpl.getBus(
						new I2CBusImplBananaPi(
								busNumber, lockAquireTimeout, lockAquireTimeoutUnit),
								busNumber, lockAquireTimeout, lockAquireTimeoutUnit);
		
	}
	
	private I2CBusImplBananaPi(final int busNumber,
    		final long lockAquireTimeout, final TimeUnit lockAquireTimeoutUnit)
			throws UnsupportedBusNumberException, IOException {
		super(busNumber, lockAquireTimeout, lockAquireTimeoutUnit);
	}
	
	@Override
	protected String getFilenameForBusnumber(int busNumber)
			throws UnsupportedBusNumberException {
		
		if ((busNumber < 0) || (busNumber > 1)) {
			throw new UnsupportedBusNumberException();
		}

		return "/dev/i2c-" + busNumber;
		
	}

}
