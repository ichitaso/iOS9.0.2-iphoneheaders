/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:17 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SpotlightUI.framework/SpotlightUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol AFDictationDelegate <NSObject>
@optional
-(void)dictationConnection:(id)arg1 didRecognizePhrases:(id)arg2 languageModel:(id)arg3 correctionIdentifier:(id)arg4;
-(void)dictationConnection:(id)arg1 didHypothesizePhrases:(id)arg2 languageModel:(id)arg3;
-(void)dictationConnection:(id)arg1 didRecognizeTokens:(id)arg2 languageModel:(id)arg3;
-(void)dictationConnectionSpeechRecordingWillBegin:(id)arg1;
-(void)dictationConnectionSpeechRecordingDidBegin:(id)arg1;
-(void)dictationConnectionSpeechRecordingDidEnd:(id)arg1;
-(void)dictationConnectionSpeechRecordingDidCancel:(id)arg1;
-(void)dictationConnection:(id)arg1 speechRecordingDidFail:(id)arg2;
-(void)dictationConnection:(id)arg1 speechRecognitionDidFail:(id)arg2;
-(void)dictationConnnectionDidChangeAvailability:(id)arg1;
-(void)dictationConnection:(id)arg1 didRecognizeTranscriptionObjects:(id)arg2 languageModel:(id)arg3;
-(void)dictationConnection:(id)arg1 didFinishWritingAudioFile:(id)arg2 error:(id)arg3;
-(void)dictationConnection:(id)arg1 didReceiveSearchResults:(id)arg2 recognizedText:(id)arg3 stable:(char)arg4 final:(char)arg5;

@end

