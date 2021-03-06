/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:40 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PreferenceBundles/ManagedConfigurationUI.bundle/ManagedConfigurationUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ManagedConfigurationUI/ManagedConfigurationUI-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UITextFieldDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@class UILabel, UITextField, UITableView, NSString, MCQuestionPane;

@interface MCQuestionView : UIView <UITextFieldDelegate, UITableViewDataSource, UITableViewDelegate> {

	UILabel* _labelAboveField;
	UILabel* _labelBelowField;
	UITextField* _questionField;
	UITableView* _questionTable;
	int _keyboardType;
	int _textAutoCaps;
	NSString* _defaultText;
	NSString* _placeholderText;
	char _isPasswordQuestion;
	char _isRequiredQuestion;
	char _isLastQuestion;
	unsigned _minimumLength;
	char _isInitialQuestion;
	MCQuestionPane* _ownerPane;

}

@property (assign,nonatomic,__weak) MCQuestionPane * ownerPane;              //@synthesize ownerPane=_ownerPane - In the implementation block
@property (assign,nonatomic) char isInitialQuestion;                         //@synthesize isInitialQuestion=_isInitialQuestion - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(char)textFieldShouldReturn:(id)arg1 ;
-(void)setProperties:(id)arg1 ;
-(void)setOwnerPane:(MCQuestionPane *)arg1 ;
-(void)setIsInitialQuestion:(char)arg1 ;
-(void)clearInputField;
-(void)disableInputField;
-(void)enableInputField;
-(void)claimFirstResponder;
-(void)_textFieldValueChanged:(id)arg1 ;
-(void)_setStylesOnLabelAboveField;
-(void)_setStylesOnLabelBelowField;
-(MCQuestionPane *)ownerPane;
-(char)isInitialQuestion;
-(void)setTextAboveField:(id)arg1 ;
-(void)setTextBelowField:(id)arg1 ;
-(void)setIsPasswordQuestion:(char)arg1 ;
-(void)setIsRequiredField:(char)arg1 ;
-(void)_configureQuestionField;
-(void)setIsLastQuestion:(char)arg1 ;
-(id)answer;
@end

