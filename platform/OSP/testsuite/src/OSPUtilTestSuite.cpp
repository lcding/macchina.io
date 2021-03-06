//
// OSPUtilTestSuite.cpp
//
// $Id: //poco/1.7/OSP/testsuite/src/OSPUtilTestSuite.cpp#1 $
//
// Copyright (c) 2007-2014, Applied Informatics Software Engineering GmbH.
// All rights reserved.
//
// SPDX-License-Identifier: Apache-2.0
//


#include "OSPUtilTestSuite.h"
#include "VersionRangeTest.h"
#include "PropertiesTest.h"
#include "QLParserTest.h"
#include "BundleStreamFactoryTest.h"


CppUnit::Test* OSPUtilTestSuite::suite()
{
	CppUnit::TestSuite* pSuite = new CppUnit::TestSuite("OSPUtilTestSuite");

	pSuite->addTest(VersionRangeTest::suite());
	pSuite->addTest(PropertiesTest::suite());
	pSuite->addTest(QLParserTest::suite());
	pSuite->addTest(BundleStreamFactoryTest::suite());

	return pSuite;
}
