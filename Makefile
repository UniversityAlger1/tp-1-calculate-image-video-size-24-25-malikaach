test_grayScaleImage: 
	cd config/ gcc  mainGrayScaleImage.c assert_with_message.c ../grayScaleImage.c -o ../result
	./result

test_ColoredBitmap: 
	cd config/; gcc  mainColoredBitmap.c assert_with_message.c ../coloredBitmap.c -o ../result
	./result

test_video: 
	cd config/; gcc  mainVideo.c assert_with_message.c ../video.c -o ../result
	./result