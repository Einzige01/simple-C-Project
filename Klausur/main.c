#include <stdio.h>
#include <stdlib.h>

#define MAXLAENGE 200

typedef struct {
    char name[MAXLAENGE];
    int format;
} Bild;

int main()
{
    Bild bilder[MAXLAENGE];
    int anzahlBilder=0;

    sprintf(bilder[0].name,"Aufgabe4Ordner.txt");
    bilder[0].format=0;
    anzahlBilder++;

    sprintf(bilder[1].name,"cloud-5946381__340.webp");
    bilder[1].format=4;
    anzahlBilder++;

    sprintf(bilder[2].name,"cropped-Eichhoernchen--1068x580.jpg");
    bilder[2].format=1;
    anzahlBilder++;

    for(int i=0;i<anzahlBilder;i++)
    {
        printf("%s %d\n",bilder[i].name,bilder[i].format);
    }


    FILE * datei=fopen("galerie.html","wt");
    fprintf(datei,"<!DOCTYPE html>");
    fprintf(datei,"<html>");
    fprintf(datei,"<head>");
    fprintf(datei," <title>Bildergalerie</title>");
    fprintf(datei,"</head>");
    fprintf(datei,"<body>");
    fprintf(datei,"<h1>Bildergalerie</h1>");
    for(int i=0;i<anzahlBilder;i++)
    {
        fprintf(datei,"<img src=\"bilder/%s\" />\n",bilder[i].name);
    }
    for(int i=0;i<anzahlBilder;i++)
    {
        fprintf(datei,"<a href=""datei/""Aufgabe4Ordner.txt"">bilder/Aufgabe4Ordner.txt</a>");
    }


    fprintf(datei,"</body>");
    fprintf(datei,"</html>");
    fclose(datei);

    return 0;
}
