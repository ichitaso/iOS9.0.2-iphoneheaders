/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:22 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/NSStoreMapping.h>

@class NSEntityDescription, NSDictionary, NSArray, NSString;

@interface NSEntityStoreMapping : NSStoreMapping {

	NSEntityDescription* _entity;
	NSDictionary* _propertyMappings;
	NSArray* _primaryKeys;
	char _isSingleTableEntity;
	NSString* _subentityColumn;
	unsigned _subentityID;

}
-(id)attributeMappings;
-(id)relationshipMappings;
-(void)setPropertyMappings:(id)arg1 ;
-(void)setPrimaryKeys:(id)arg1 ;
-(void)setSingleTableEntity:(char)arg1 ;
-(void)setSubentityColumn:(id)arg1 ;
-(void)setSubentityID:(unsigned)arg1 ;
-(id)propertyMappings;
-(id)primaryKeys;
-(char)isSingleTableEntity;
-(id)subentityColumn;
-(unsigned)subentityID;
-(id)primaryKeyColumnDefinitions;
-(id)attributeColumnDefinitions;
-(id)foreignKeyColumnDefinitions;
-(id)foreignKeyConstraintDefinitions;
-(id)initWithEntity:(id)arg1 ;
-(id)createTableStatement;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(id)entity;
-(void)setEntity:(id)arg1 ;
@end

