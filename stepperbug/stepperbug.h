// ensure this library description is only included once
#ifndef stepperbug_h
#define stepperbug_h

// library interface description
class stepperbug {
  public:
    // constructors:
    stepperbug(int number_of_steps, int motor_pin_1, int motor_pin_2);
    stepperbug(int number_of_steps, int motor_pin_1, int motor_pin_2,
                                 int motor_pin_3, int motor_pin_4);
    // speed setter method:
    void stepperspeed(long whatSpeed);

    // mover method:
    void stepperstep(int number_of_steps);

    int version(void);

  private:
    void stepperMotor(int this_step);

    int direction;            // Direction of rotation
    unsigned long step_delay; // delay between steps, in ms, based on speed
    int number_of_steps;      // total number of steps this motor can take
    int pin_count;            // how many pins are in use.
    int step_number;          // which step the motor is on

    // motor pin numbers:
    int motor_pin_1;
    int motor_pin_2;
    int motor_pin_3;
    int motor_pin_4;
    unsigned long last_step_time; // time stamp in us of when the last step was taken
};

#endif