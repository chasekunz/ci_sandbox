#!/usr/bin/env python

import pytest
import sys, os
sys.path.append(os.path.join(os.path.dirname(__file__), '..', 'subtraction'))
from subtraction import subtract

def test_subtraction():
    assert subtract(1,1) == 0