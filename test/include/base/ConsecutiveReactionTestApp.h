//* This file is part of the MOOSE framework
//* https://www.mooseframework.org
//*
//* All rights reserved, see COPYRIGHT for full restrictions
//* https://github.com/idaholab/moose/blob/master/COPYRIGHT
//*
//* Licensed under LGPL 2.1, please see LICENSE for details
//* https://www.gnu.org/licenses/lgpl-2.1.html
#ifndef CONSECUTIVE_REACTIONTESTAPP_H
#define CONSECUTIVE_REACTIONTESTAPP_H

#include "MooseApp.h"

class ConsecutiveReactionTestApp;

template <>
InputParameters validParams<ConsecutiveReactionTestApp>();

class ConsecutiveReactionTestApp : public MooseApp
{
public:
  ConsecutiveReactionTestApp(InputParameters parameters);
  virtual ~ConsecutiveReactionTestApp();

  static void registerApps();
  static void registerAll(Factory & f, ActionFactory & af, Syntax & s, bool use_test_objs = false);
};

#endif /* CONSECUTIVE_REACTIONTESTAPP_H */
