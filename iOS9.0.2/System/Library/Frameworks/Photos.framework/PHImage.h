/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:59 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class UIImage, NSData;

@interface PHImage : NSObject {

	char _isPlaceholder;
	UIImage* _uiImage;
	NSData* _data;
	unsigned _width;
	unsigned _height;
	unsigned _bytesPerRow;
	unsigned _dataWidth;
	unsigned _dataHeight;
	unsigned _dataOffset;
	int _format;

}

@property (nonatomic,readonly) UIImage * uiImage;                 //@synthesize uiImage=_uiImage - In the implementation block
@property (nonatomic,readonly) NSData * data;                     //@synthesize data=_data - In the implementation block
@property (nonatomic,readonly) unsigned width;                    //@synthesize width=_width - In the implementation block
@property (nonatomic,readonly) unsigned height;                   //@synthesize height=_height - In the implementation block
@property (nonatomic,readonly) unsigned bytesPerRow;              //@synthesize bytesPerRow=_bytesPerRow - In the implementation block
@property (nonatomic,readonly) unsigned dataWidth;                //@synthesize dataWidth=_dataWidth - In the implementation block
@property (nonatomic,readonly) unsigned dataHeight;               //@synthesize dataHeight=_dataHeight - In the implementation block
@property (nonatomic,readonly) unsigned dataOffset;               //@synthesize dataOffset=_dataOffset - In the implementation block
@property (nonatomic,readonly) int format;                        //@synthesize format=_format - In the implementation block
@property (nonatomic,readonly) char isPlaceholder;                //@synthesize isPlaceholder=_isPlaceholder - In the implementation block
+(id)imageWithUIImage:(id)arg1 format:(int)arg2 isPlaceholder:(char)arg3 ;
+(id)imageWithData:(id)arg1 width:(unsigned)arg2 height:(unsigned)arg3 bytesPerRow:(unsigned)arg4 dataWidth:(unsigned)arg5 dataHeight:(unsigned)arg6 dataOffset:(unsigned)arg7 format:(int)arg8 isPlaceholder:(char)arg9 ;
-(id)initWithUIImage:(id)arg1 format:(int)arg2 isPlaceholder:(char)arg3 ;
-(id)initWithData:(id)arg1 width:(unsigned)arg2 height:(unsigned)arg3 bytesPerRow:(unsigned)arg4 dataWidth:(unsigned)arg5 dataHeight:(unsigned)arg6 dataOffset:(unsigned)arg7 format:(int)arg8 isPlaceholder:(char)arg9 ;
-(UIImage *)uiImage;
-(unsigned)bytesPerRow;
-(unsigned)dataWidth;
-(unsigned)dataHeight;
-(unsigned)dataOffset;
-(int)format;
-(id)description;
-(NSData *)data;
-(unsigned)width;
-(unsigned)height;
-(char)isPlaceholder;
@end

