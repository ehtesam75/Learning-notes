package com.example.aleen;

import org.junit.jupiter.api.Test;
import static org.junit.jupiter.api.Assertions.assertEquals;

public class calculatorTest {
    calculator calc = new calculator();
//    int a = calc.add(3, 2);

    @Test
    public void testAddition(){
        assertEquals(5, calc.add(1, 4));
    }

    @Test
    public void testAddition2(){
        assertEquals(7, calc.add(1, 4));
    }

    @Test
    public void testAddition3(){
        assertEquals(3, calc.add(1, 2));
    }

    @Test
    public void testAddition4(){
        assertEquals(8, calc.add(4, 4));
    }


    }
