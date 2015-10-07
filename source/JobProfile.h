#pragma once

//Basic description of the parameters for a job including tool
//and cost information.
//Defined as a separate structure to allow serialization.
struct JobProfile  {
  const double padding; //In inches
  const double max_speed; //In inches per second
  const double cost_per_s; //In dollars per second
  const double cost_per_sq_in; //In dollars per square inch.
};
