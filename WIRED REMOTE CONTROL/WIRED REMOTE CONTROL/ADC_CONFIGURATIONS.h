#ifndef CONFIG_H 
#define CONFIG_H


//FROM HERE YOU CAN CHOOSE MODE OF ADC BY ASSIGNING THE MODE MACRO TO ==> (ADC_MODE)
#define ADC_MODE ADC_Single_Conv
//FROM HERE YOU CAN CHOOSE MODE OF AUTO-TRIGGER ADC BY ASSIGNING THE MODE MACRO TO ==> (ADC_AUTOTRIGGER_MODE)
#define ADC_AUTOTRIGGER_MODE ADC_FREE_RUNING_MODE

/*ADC TWO MODES 1-AUTO TRIGGER 2-SINGLE CONVERSION*/
#define ADC_Auto_Triggerd_Conv 1
#define ADC_Single_Conv 2
/*ADC AUTO TRIGGER MODES*/
/*1-FREE RUNING 2- TIMER OVF .....*/
#define ADC_FREE_RUNING_MODE 0



#define ADC_DISABLE_INTERRUPT 2
#define ADC_ENABLE_INTERRUPT 3

#define ADC_VREF_AREF 0
#define ADC_VREF_AVCC 1


#define ADC_PRESCALER_2_ 0
#define ADC_PRESCALER_2 1
#define ADC_PRESCALER_128 7





#define ADC_CH0_SINGLE 0



#endif /*CONFIG_H*/