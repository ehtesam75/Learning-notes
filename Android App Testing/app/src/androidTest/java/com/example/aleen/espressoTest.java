package com.example.aleen;

import androidx.test.core.app.ActivityScenario;
import androidx.test.espresso.intent.Intents;
import androidx.test.ext.junit.rules.ActivityScenarioRule;
import androidx.test.ext.junit.runners.AndroidJUnit4;

import org.junit.Rule;
import org.junit.Test;
import org.junit.runner.RunWith;

import static androidx.test.espresso.Espresso.onView;
import static androidx.test.espresso.action.ViewActions.click;
import static androidx.test.espresso.assertion.ViewAssertions.matches;
import static androidx.test.espresso.intent.Intents.intended;
import static androidx.test.espresso.intent.matcher.IntentMatchers.hasComponent;
import static androidx.test.espresso.matcher.ViewMatchers.withId;
import static androidx.test.espresso.matcher.ViewMatchers.withText;
import static androidx.test.espresso.matcher.ViewMatchers.isDisplayed;
import static org.junit.Assert.assertTrue;

@RunWith(AndroidJUnit4.class)
public class espressoTest {

    @Rule
    public ActivityScenarioRule<MainActivity> activityRule =
            new ActivityScenarioRule<>(MainActivity.class);

    @Test
    public void testIncreaseButtonIncrementsCount() {
        // Initially should be "0"
        onView(withId(R.id.textViewCount))
                .check(matches(withText("0")));

        // Click Increase
        for (int i = 0; i < 5; i++) {
            onView(withId(R.id.buttonIncrease)).perform(click());
        }

        // Should now be "5"
        onView(withId(R.id.textViewCount))
                .check(matches(withText("5")));
    }

    @Test
    public void testResetButtonResetsCount() {
        // Click Increase twice
        onView(withId(R.id.buttonIncrease)).perform(click());
        onView(withId(R.id.buttonIncrease)).perform(click());
        onView(withId(R.id.buttonIncrease)).perform(click());

        // Check count is "3"
        onView(withId(R.id.textViewCount))
                .check(matches(withText("3")));

        // Click Reset
        onView(withId(R.id.buttonReset)).perform(click());

        // Count should be back to "0"
        onView(withId(R.id.textViewCount))
                .check(matches(withText("0")));
    }

    @Test
    public void testOpenNewPageShowsHelloWorld() {

        // Initialize Intents
        Intents.init();

        // Perform click
        onView(withId(R.id.buttonOpenNewPage)).perform(click());

        // Verify SecondActivity was launched
        intended(hasComponent(SecondActivity.class.getName()));

        // Verify Hello World text is shown
        onView(withText("Hello World"))
                .check(matches(isDisplayed()));

        // Release Intents
        Intents.release();
    }
}
