#!/bin/bash
for i in {1..20}
do
	pico2wave --lang de-DE --wave /tmp/Test.wav "$(./sentenceBuilder)"  ; play /tmp/Test.wav; rm /tmp/Test.wav
done
