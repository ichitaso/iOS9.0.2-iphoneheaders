/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:03 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthKitUI.framework/HealthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol HKFetchOperationDelegate;
@class NSUUID;

@interface HKFetchOperation : NSObject {

	NSUUID* _UUID;
	int _clientPriority;
	int _operationPriority;
	id<HKFetchOperationDelegate> _delegate;

}

@property (nonatomic,readonly) NSUUID * UUID;                                                                                 //@synthesize UUID=_UUID - In the implementation block
@property (assign,nonatomic) int clientPriority;                                                                              //@synthesize clientPriority=_clientPriority - In the implementation block
@property (assign,nonatomic) int operationPriority;                                                                           //@synthesize operationPriority=_operationPriority - In the implementation block
@property (assign,setter=_setDelegate:,getter=_delegate,nonatomic,__weak) id<HKFetchOperationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(id)_delegate;
-(NSUUID *)UUID;
-(void)_setDelegate:(id)arg1 ;
-(void)startOperationWithCompletion:(/*^block*/id)arg1 ;
-(void)stopOperation;
-(void)setOperationPriority:(int)arg1 ;
-(void)setClientPriority:(int)arg1 ;
-(int)clientPriority;
-(int)operationPriority;
-(void)_alertDelegateDidUpdatePriority;
@end

