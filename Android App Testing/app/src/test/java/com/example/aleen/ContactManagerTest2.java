package com.example.aleen;

import static org.junit.jupiter.api.Assertions.*;

import org.junit.jupiter.api.Assertions;
import org.junit.jupiter.api.BeforeAll;
import org.junit.jupiter.api.BeforeEach;
import org.junit.jupiter.api.Disabled;
import org.junit.jupiter.api.DisplayName;
import org.junit.jupiter.api.Test;
import org.junit.jupiter.api.condition.EnabledOnOs;
import org.junit.jupiter.api.condition.OS;
import org.junit.jupiter.api.condition.DisabledOnOs;

public class ContactManagerTest2 {
    ContactManager cm;
    @BeforeAll
    public static void beforeall(){
        System.out.println("this will execute before all test cases");
    }
    @BeforeEach
    public void beforeeach(){
        System.out.println("this will execute before each test cases");
        cm = new ContactManager();
    }


    @Test
    public void test1(){
        cm.addContact("aleen", "khan", "0123536789");
        assertFalse(cm.getAllContacts().isEmpty());
        assertEquals(1, cm.getAllContacts().size());
    }

    @DisabledOnOs(value = OS.WINDOWS, disabledReason = "not supported on windows")
    @Test
    @DisplayName("new Test")
    public void test2(){

        Assertions.assertThrows(RuntimeException.class, () -> cm.addContact(null, "khan", "0123455688"));
    }
}