################################################################################################################################################################

# @project        Library ▸ Physics
# @file           bindings/python/test/time/test_date.py
# @author         Lucas Brémond <lucas@loftorbital.com>
# @license        Apache License 2.0

################################################################################################################################################################

import pytest

from Library.Physics.Time import Date

################################################################################################################################################################

def test_date_constructors ():

    assert Date(2018, 1, 1) is not None

################################################################################################################################################################

def test_date_undefined ():

    assert Date.Undefined() is not None

################################################################################################################################################################

def test_date_j2000 ():

    assert Date.J2000() is not None

################################################################################################################################################################

def test_date_gps_epoch ():

    assert Date.GPSEpoch() is not None

################################################################################################################################################################

def test_date_unix_epoch ():

    assert Date.UnixEpoch() is not None

################################################################################################################################################################

def test_date_modified_julian_date_epoch ():

    assert Date.ModifiedJulianDateEpoch() is not None

################################################################################################################################################################

def test_date_parse ():

    assert Date.Parse('2018-01-01') is not None
    assert Date.Parse('2018-01-01', Date.Format.Standard) is not None
    assert Date.Parse('2 Jan 2019', Date.Format.STK) is not None

################################################################################################################################################################

def test_date_operators ():

    date = Date(2018, 1, 1)

    assert (date == date) is not None
    assert (date != date) is not None

################################################################################################################################################################

def test_date_is_defined ():

    date = Date(2018, 1, 1)

    assert date.isDefined() is not None

################################################################################################################################################################

def test_date_get_year ():

    date = Date(2018, 1, 1)

    assert date.getYear() is not None

################################################################################################################################################################

def test_date_get_day ():

    date = Date(2018, 1, 1)

    assert date.getDay() is not None

################################################################################################################################################################

def test_date_get_month ():

    date = Date(2018, 1, 1)

    assert date.getMonth() is not None

################################################################################################################################################################

def test_date_to_string ():

    date = Date(2018, 1, 1)

    date.toString()
    date.toString(Date.Format.Standard)
    date.toString(Date.Format.STK)

################################################################################################################################################################

def test_date_set_year ():

    date = Date(2018, 1, 1)

    date.setYear(2019)

################################################################################################################################################################

def test_date_set_month ():

    date = Date(2018, 1, 1)

    date.setMonth(2)

################################################################################################################################################################

def test_date_set_day ():

    date = Date(2018, 1, 1)

    date.setDay(2)

################################################################################################################################################################
