/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:38 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface WBParagraph : NSObject
+(int)blockType;
+(void)readRunsFor:(id)arg1 from:(id)arg2 textRun:(WrdParagraphTextRun*)arg3 ;
+(void)readFrom:(id)arg1 textRun:(WrdParagraphTextRun*)arg2 paragraph:(id)arg3 ;
+(void)readCharacterRunsFor:(id)arg1 from:(id)arg2 readState:(WBParagraphReadState*)arg3 ;
+(void)readNoteFor:(id)arg1 from:(id)arg2 readState:(WBParagraphReadState*)arg3 ;
+(void)readAnnotationFor:(id)arg1 from:(id)arg2 readState:(WBParagraphReadState*)arg3 ;
+(void)readFieldMarkerFor:(id)arg1 from:(id)arg2 readState:(WBParagraphReadState*)arg3 ;
+(void)readBookmarkFor:(id)arg1 from:(id)arg2 readState:(WBParagraphReadState*)arg3 ;
+(void)readAnnotationBookmarkFor:(id)arg1 from:(id)arg2 readState:(WBParagraphReadState*)arg3 ;
+(void)checkForNoteFrom:(id)arg1 footnote:(char)arg2 runEnd:(int*)arg3 readState:(WBParagraphReadState*)arg4 ;
+(void)checkForAnnotationFrom:(id)arg1 runEnd:(int*)arg2 readState:(WBParagraphReadState*)arg3 ;
+(void)checkForAnnotationBookmarkFrom:(id)arg1 runEnd:(int*)arg2 readState:(WBParagraphReadState*)arg3 ;
+(void)check:(id)arg1 forFieldMarkerFrom:(id)arg2 runEnd:(int*)arg3 readState:(WBParagraphReadState*)arg4 ;
+(void)checkForBookmarkFrom:(id)arg1 runEnd:(int*)arg2 readState:(WBParagraphReadState*)arg3 ;
+(void)readSpecialCharactersFor:(id)arg1 from:(id)arg2 textRun:(WrdCharacterTextRun*)arg3 ;
+(void)readSymbolsFor:(id)arg1 from:(id)arg2 textRun:(WrdCharacterTextRun*)arg3 ;
+(BOOL)isCPAnnotationRangeEnd:(int)arg1 bookmarkTable:(WrdBookmarkTable*)arg2 ;
+(void)readOfficeArtFor:(id)arg1 from:(id)arg2 at:(int)arg3 textRun:(WrdCharacterTextRun*)arg4 ;
+(void)readPictureFor:(id)arg1 from:(id)arg2 at:(int)arg3 textRun:(WrdCharacterTextRun*)arg4 ;
+(void)readSpecialCharacterFor:(id)arg1 from:(id)arg2 at:(int)arg3 textRun:(WrdCharacterTextRun*)arg4 ;
@end

