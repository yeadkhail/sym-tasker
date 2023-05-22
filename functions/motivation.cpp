#include<iostream>
#include<string>
#include<cstdlib>
#include<vector>
#include <ctime>

using namespace std;
int motivation()
{
    string quotes[] = {
            "\"Success is not final, failure is not fatal: It is the courage to continue that counts.\" - Winston Churchill",
            "\"Believe you can and you're halfway there.\" - Theodore Roosevelt",
            "\"The only way to do great work is to love what you do.\" - Steve Jobs",
            "\"Don't watch the clock; do what it does. Keep going.\" - Sam Levenson",
            "\"Success is walking from failure to failure with no loss of enthusiasm.\" - Winston Churchill",
            "\"The future belongs to those who believe in the beauty of their dreams.\" - Eleanor Roosevelt",
            "\"The only limit to our realization of tomorrow will be our doubts of today.\" - Franklin D. Roosevelt",
            "\"Success usually comes to those who are too busy to be looking for it.\" - Henry David Thoreau",
            "\"The best way to predict the future is to create it.\" - Peter Drucker",
            "\"The secret to getting ahead is getting started.\" - Mark Twain",
            "\"Don't be pushed around by the fears in your mind. Be led by the dreams in your heart.\" - Roy T. Bennett",
            "\"Your time is limited, don't waste it living someone else's life.\" - Steve Jobs",
            "\"Believe in yourself and all that you are. Know that there is something inside you that is greater than any obstacle.\" - Christian D. Larson",
            "\"The harder you work for something, the greater you'll feel when you achieve it.\" - Unknown",
            "\"Success is not in what you have, but who you are.\" - Bo Bennett",
            "\"It does not matter how slowly you go as long as you do not stop.\" - Confucius",
            "\"Success is not the key to happiness. Happiness is the key to success. If you love what you are doing, you will be successful.\" - Albert Schweitzer",
            "\"Don't be afraid to give up the good to go for the great.\" - John D. Rockefeller",
            "\"The only place where success comes before work is in the dictionary.\" - Vidal Sassoon",
            "\"The future depends on what you do today.\" - Mahatma Gandhi",
            "\"Success is not just about making money. It's about making a difference.\" - Unknown",
            "\"The road to success and the road to failure are almost exactly the same.\" - Colin R. Davis",
            "\"The only person you should try to be better than is the person you were yesterday.\" - Unknown",
            "\"Don't count the days, make the days count.\" - Muhammad Ali",
            "\"Success is not for the lazy.\" - Unknown",
            "\"The only limit to our realization of tomorrow will be our doubts of today.\" - Franklin D. Roosevelt",
            "\"Success is the sum of small efforts, repeated day in and day out.\" - Robert Collier",
            "\"Success is not the key to happiness. Happiness is the key to success. If you love what you are doing, you will be successful.\" - Albert Schweitzer",
            "\"The only way to do great work is to love what you do.\" - Steve Jobs",
            "\"Success usually comes to those who are too busy to be looking for it.\" - Henry David Thoreau",
            "\"The secret of success is to know something nobody else knows.\" - Aristotle Onassis",
            "\"The harder you work for something, the greater you'll feel when you achieve it.\" - Unknown",
            "\"Success is not in what you have, but who you are.\" - Bo Bennett",
            "\"Believe you can and you're halfway there.\" - Theodore Roosevelt",
            "\"The only place where success comes before work is in the dictionary.\" - Vidal Sassoon",
            "\"Success is not final, failure is not fatal: It is the courage to continue that counts.\" - Winston Churchill",
            "\"The future belongs to those who believe in the beauty of their dreams.\" - Eleanor Roosevelt",
            "\"Don't watch the clock; do what it does. Keep going.\" - Sam Levenson",
            "\"The best way to predict the future is to create it.\" - Peter Drucker",
            "\"The only limit to our realization of tomorrow will be our doubts of today.\" - Franklin D. Roosevelt",
            "\"Success usually comes to those who are too busy to be looking for it.\" - Henry David Thoreau",
            "\"The secret to getting ahead is getting started.\" - Mark Twain",
            "\"Don't be pushed around by the fears in your mind. Be led by the dreams in your heart.\" - Roy T. Bennett",
            "\"Your time is limited, don't waste it living someone else's life.\" - Steve Jobs",
            "\"Believe in yourself and all that you are. Know that there is something inside you that is greater than any obstacle.\" - Christian D. Larson",
            "\"The harder you work for something, the greater you'll feel when you achieve it.\" - Unknown"
    };

    srand(time(nullptr));
    int index = rand() % 49;
    cout << quotes[index] << endl;
    return 0;
}