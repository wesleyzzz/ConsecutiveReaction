#include "ConsecutiveReactionApp.h"
#include "Moose.h"
#include "AppFactory.h"
#include "ModulesApp.h"
#include "MooseSyntax.h"

template <>
InputParameters
validParams<ConsecutiveReactionApp>()
{
  InputParameters params = validParams<MooseApp>();
  return params;
}

ConsecutiveReactionApp::ConsecutiveReactionApp(InputParameters parameters) : MooseApp(parameters)
{
  ConsecutiveReactionApp::registerAll(_factory, _action_factory, _syntax);
}

ConsecutiveReactionApp::~ConsecutiveReactionApp() {}

void
ConsecutiveReactionApp::registerAll(Factory & f, ActionFactory & af, Syntax & s)
{
  ModulesApp::registerAll(f, af, s);
  Registry::registerObjectsTo(f, {"ConsecutiveReactionApp"});
  Registry::registerActionsTo(af, {"ConsecutiveReactionApp"});

  /* register custom execute flags, action syntax, etc. here */
}

void
ConsecutiveReactionApp::registerApps()
{
  registerApp(ConsecutiveReactionApp);
}

/***************************************************************************************************
 *********************** Dynamic Library Entry Points - DO NOT MODIFY ******************************
 **************************************************************************************************/
extern "C" void
ConsecutiveReactionApp__registerAll(Factory & f, ActionFactory & af, Syntax & s)
{
  ConsecutiveReactionApp::registerAll(f, af, s);
}
extern "C" void
ConsecutiveReactionApp__registerApps()
{
  ConsecutiveReactionApp::registerApps();
}
