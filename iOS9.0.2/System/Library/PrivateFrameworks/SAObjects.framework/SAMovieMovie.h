/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:03 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class NSArray, NSURL, NSNumber, NSString, SALocalSearchReviewList, NSDate;

@interface SAMovieMovie : SADomainObject

@property (nonatomic,copy) NSArray * actors; 
@property (nonatomic,copy) NSArray * directors; 
@property (nonatomic,copy) NSArray * genres; 
@property (nonatomic,copy) NSURL * hiResTrailerUri; 
@property (nonatomic,copy) NSURL * iTunesUri; 
@property (assign,nonatomic) char is3d; 
@property (nonatomic,copy) NSNumber * isAvailableOnItunesForPurchase; 
@property (nonatomic,copy) NSNumber * isAvailableOnItunesForRent; 
@property (nonatomic,copy) NSURL * lowResTrailerUri; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSArray * posterImages; 
@property (nonatomic,copy) NSURL * posterUri; 
@property (nonatomic,copy) NSNumber * qualityRating; 
@property (nonatomic,copy) NSString * rating; 
@property (nonatomic,retain) SALocalSearchReviewList * reviews; 
@property (nonatomic,copy) NSURL * rottenTomatoesUri; 
@property (assign,nonatomic) int runtimeInMinutes; 
@property (nonatomic,copy) NSArray * studios; 
@property (nonatomic,copy) NSString * synopsis; 
@property (nonatomic,copy) NSString * theaterShowtimeSearchRegionDescription; 
@property (nonatomic,copy) NSArray * theaterShowtimes; 
@property (nonatomic,copy) NSDate * theatricalReleaseDate; 
+(id)movie;
+(id)movieWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)setReviews:(SALocalSearchReviewList *)arg1 ;
-(SALocalSearchReviewList *)reviews;
-(NSString *)rating;
-(void)setRating:(NSString *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSArray *)posterImages;
-(void)setPosterImages:(NSArray *)arg1 ;
-(NSNumber *)qualityRating;
-(void)setQualityRating:(NSNumber *)arg1 ;
-(NSDate *)theatricalReleaseDate;
-(void)setTheatricalReleaseDate:(NSDate *)arg1 ;
-(NSURL *)iTunesUri;
-(void)setITunesUri:(NSURL *)arg1 ;
-(NSArray *)actors;
-(void)setActors:(NSArray *)arg1 ;
-(NSArray *)directors;
-(void)setDirectors:(NSArray *)arg1 ;
-(NSArray *)genres;
-(void)setGenres:(NSArray *)arg1 ;
-(NSURL *)hiResTrailerUri;
-(void)setHiResTrailerUri:(NSURL *)arg1 ;
-(char)is3d;
-(void)setIs3d:(char)arg1 ;
-(NSNumber *)isAvailableOnItunesForPurchase;
-(void)setIsAvailableOnItunesForPurchase:(NSNumber *)arg1 ;
-(NSNumber *)isAvailableOnItunesForRent;
-(void)setIsAvailableOnItunesForRent:(NSNumber *)arg1 ;
-(NSURL *)lowResTrailerUri;
-(void)setLowResTrailerUri:(NSURL *)arg1 ;
-(NSURL *)posterUri;
-(void)setPosterUri:(NSURL *)arg1 ;
-(NSURL *)rottenTomatoesUri;
-(void)setRottenTomatoesUri:(NSURL *)arg1 ;
-(int)runtimeInMinutes;
-(void)setRuntimeInMinutes:(int)arg1 ;
-(NSArray *)studios;
-(void)setStudios:(NSArray *)arg1 ;
-(NSString *)theaterShowtimeSearchRegionDescription;
-(void)setTheaterShowtimeSearchRegionDescription:(NSString *)arg1 ;
-(NSArray *)theaterShowtimes;
-(void)setTheaterShowtimes:(NSArray *)arg1 ;
-(void)setSynopsis:(NSString *)arg1 ;
-(NSString *)synopsis;
@end
