//  Copyright 2009-2010 Aurora Feint, Inc.
// 
//  Licensed under the Apache License, Version 2.0 (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at
//  
//  	http://www.apache.org/licenses/LICENSE-2.0
//  	
//  Unless required by applicable law or agreed to in writing, software
//  distributed under the License is distributed on an "AS IS" BASIS,
//  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//  See the License for the specific language governing permissions and
//  limitations under the License.

#import "OFUnlockedAchievementNotificationData.h"
#import "OFAchievement.h"
#import "OFDependencies.h"

@implementation OFUnlockedAchievementNotificationData

@synthesize unlockedAchievement, percentComplete;

+ (OFUnlockedAchievementNotificationData*) dataWithAchievement:(OFAchievement*)unlockedAchievement andPercentComplete:(double)percentComplete
{
	OFUnlockedAchievementNotificationData* data = [[OFUnlockedAchievementNotificationData new] autorelease];
	data.notificationText = OFLOCALSTRING(@"Achievement Unlocked!");
	data.notificationCategory = kNotificationCategoryAchievement;
	data.notificationType = kNotificationTypeSuccess;
	data.unlockedAchievement = unlockedAchievement;
	data.percentComplete = percentComplete;
	return data;
}

- (void)dealloc
{
	self.unlockedAchievement = nil;
	[super dealloc];
}

@end
