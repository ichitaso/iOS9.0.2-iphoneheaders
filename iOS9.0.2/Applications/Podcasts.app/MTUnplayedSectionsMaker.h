/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:52 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSDate, NSArray, NSCalendar;

@interface MTUnplayedSectionsMaker : NSObject {

	NSDate* _oldestEpisodeDate;
	NSDate* _currentDate;
	NSArray* _sectionTitles;
	NSArray* _dateRanges;
	NSArray* _fetchedResultsControllers;
	NSCalendar* _gregorian;
	unsigned _numberOfNullEntries;

}

@property (nonatomic,copy) NSDate * oldestEpisodeDate;                       //@synthesize oldestEpisodeDate=_oldestEpisodeDate - In the implementation block
@property (nonatomic,readonly) NSDate * strippedToday; 
@property (nonatomic,copy) NSDate * currentDate;                             //@synthesize currentDate=_currentDate - In the implementation block
@property (nonatomic,copy) NSArray * dateRanges;                             //@synthesize dateRanges=_dateRanges - In the implementation block
@property (nonatomic,copy) NSArray * fetchedResultsControllers;              //@synthesize fetchedResultsControllers=_fetchedResultsControllers - In the implementation block
@property (nonatomic,retain) NSCalendar * gregorian;                         //@synthesize gregorian=_gregorian - In the implementation block
@property (assign,nonatomic) unsigned numberOfNullEntries;                   //@synthesize numberOfNullEntries=_numberOfNullEntries - In the implementation block
-(NSDate *)oldestEpisodeDate;
-(id)initWithNumberOfNullEntries:(unsigned)arg1 ;
-(id)fetchedResultsControllerForOldestEpisodeDate:(id)arg1 currentDate:(id)arg2 ;
-(NSDate *)strippedToday;
-(void)setNumberOfNullEntries:(unsigned)arg1 ;
-(void)makeDateRanges;
-(id)makeFetchedResultsControllers;
-(id)pastWeekDateRanges;
-(id)monthsDateRanges;
-(id)thisYearDateRange;
-(id)pastYearDateRanges;
-(void)setDateRanges:(NSArray *)arg1 ;
-(unsigned)numberOfNullEntries;
-(NSArray *)dateRanges;
-(id)predicateForDateRange:(id)arg1 ;
-(NSCalendar *)gregorian;
-(id)unmodifiedPastYearDateRanges;
-(id)offsetDate:(id)arg1 byDays:(int)arg2 ;
-(char)date:(id)arg1 isEarlierThanDate:(id)arg2 ;
-(int)yearFromDate:(id)arg1 ;
-(id)dayRangeForDate:(id)arg1 ;
-(void)setOldestEpisodeDate:(NSDate *)arg1 ;
-(NSArray *)fetchedResultsControllers;
-(void)setFetchedResultsControllers:(NSArray *)arg1 ;
-(void)setGregorian:(NSCalendar *)arg1 ;
-(NSDate *)currentDate;
-(id)sectionTitles;
-(void)setCurrentDate:(NSDate *)arg1 ;
@end

