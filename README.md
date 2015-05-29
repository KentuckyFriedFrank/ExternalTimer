# ExternalTimer
Using Processing as an external timer in ordr to benchmark Teensy/Arduino code

BaseBench: 
  Arduino/Teensy ino: Simple sketch that sends a start/stop byte over
  serial with a 100Millisecond delay in between each. (also a
  100Millisecond delay after the stop bit in order  to give time for
  Processing to be ready to listen again).

  Processing pde: Listens for start/stop byte to calculate totalTime.
  After 100 loops it prints the average.
  
  ToDo:
    Benchmark actual code.
