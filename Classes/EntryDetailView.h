//
//  EntryDetailView.h
//  168 Hours
//
//  Created by Orlando O'Neill on 3/3/11.
//  Copyright 2011 Orlando O'Neill
//
//  Licensed under the Apache License, Version 2.0 (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at
//  
//  http://www.apache.org/licenses/LICENSE-2.0
//
//  Unless required by applicable law or agreed to in writing, software
//  distributed under the License is distributed on an "AS IS" BASIS,
//  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//  See the License for the specific language governing permissions and
//  limitations under the License.
//

#import <UIKit/UIKit.h>
#import "Activity.h"
@class RenameActivityView;
@class ChangeActivityTimeView;


@interface EntryDetailView : UIViewController <UITableViewDelegate> 
{
	IBOutlet UIButton *weekOneHours;
	IBOutlet UIButton *weekOneMinutes;
	IBOutlet UIButton *activityTitle;
    IBOutlet UILabel *weekLabel;
    NSNumber *deletedAnEntry;
	Activity *activity;
	NSMutableArray *entries;
	NSMutableArray *selectedEntries;
    NSDate *selectedDay;
    NSMutableArray *miscEntries;
	UITableViewCell *entryCell;
	RenameActivityView *renameActivityView;
	ChangeActivityTimeView *changeActivityTimeView;
}

@property (nonatomic, retain) Activity *activity;
@property (nonatomic, retain) NSMutableArray *entries;
@property (nonatomic, retain) NSDate *selectedDay;
@property (nonatomic, retain) NSNumber *deletedAnEntry;
@property (nonatomic, assign) IBOutlet UITableViewCell *entryCell;

//- (void)setButtonDisplay:(NSNumber *)week;
- (void)setTimeButtons;
- (NSMutableArray *)timeSpentDoingEntry:(Entry *)entry;
- (void)setEntriesToShow;
- (IBAction)renameActivity:(id)sender;
- (void)createMiscEntries:(NSMutableArray *)entries;

@end
