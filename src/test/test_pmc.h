/*
 * test_pmc.h
 *
 *  Created on: 17 sep 2014
 *      Author: felix
 */

#ifndef TEST_PMC_H_
#define TEST_PMC_H_



void test_pmc_start_peripheral_clock_when_successful(void);
void test_pmc_status_peripheral_clock_when_inactive(void);
void test_pmc_status_peripheral_clock_when_active(void);
void test_pmc_stop_peripheral_clock_when_successful(void);


#endif /* TEST_PMC_H_ */