//* This file is part of the MOOSE framework
//* https://www.mooseframework.org
//*
//* All rights reserved, see COPYRIGHT for full restrictions
//* https://github.com/idaholab/moose/blob/master/COPYRIGHT
//*
//* Licensed under LGPL 2.1, please see LICENSE for details
//* https://www.gnu.org/licenses/lgpl-2.1.html
#ifndef CONSECUTIVE_REACTIONAPP_H
#define CONSECUTIVE_REACTIONAPP_H

#include "MooseApp.h"

class ConsecutiveReactionApp;

template <>
InputParameters validParams<ConsecutiveReactionApp>();

class ConsecutiveReactionApp : public MooseApp
{
public:
  ConsecutiveReactionApp(InputParameters parameters);
  virtual ~ConsecutiveReactionApp();

  static void registerApps();
  static void registerAll(Factory & f, ActionFactory & af, Syntax & s);
};

#endif /* CONSECUTIVE_REACTIONAPP_H */
