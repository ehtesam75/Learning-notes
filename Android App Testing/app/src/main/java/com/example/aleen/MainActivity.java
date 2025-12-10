package com.example.aleen;

import android.content.Intent;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.TextView;
import androidx.appcompat.app.AppCompatActivity;

public class MainActivity extends AppCompatActivity {

    private int count = 0;
    private TextView textViewCount;
    private Button buttonIncrease, buttonReset, buttonOpenNewPage;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        textViewCount = findViewById(R.id.textViewCount);
        buttonIncrease = findViewById(R.id.buttonIncrease);
        buttonReset = findViewById(R.id.buttonReset);
        buttonOpenNewPage = findViewById(R.id.buttonOpenNewPage);

        // Show initial count
        textViewCount.setText(String.valueOf(count));

        // Increase button
        buttonIncrease.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                count++;
                textViewCount.setText(String.valueOf(count));
            }
        });

        // Reset button
        buttonReset.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                count = 0;
                textViewCount.setText(String.valueOf(count));
            }
        });

        // Open new page button
        buttonOpenNewPage.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                Intent intent = new Intent(MainActivity.this, SecondActivity.class);
                startActivity(intent);
            }
        });
    }
}

