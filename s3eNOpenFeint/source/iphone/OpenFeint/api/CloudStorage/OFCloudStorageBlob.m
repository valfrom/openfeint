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

#import "OFResourceField.h"
#import "OFCloudStorageBlob.h"
#import "OFCloudStorageService.h"
#import "OFDependencies.h"

@implementation OFCloudStorageBlob

@synthesize userId, keyStr;


- (void)setUserId:(NSString*)value
{
	if (value != userId)
	{
		OFSafeRelease(userId);
		userId = [value retain];
	}
}


- (void)setKeyStr:(NSString*)value
{
	OFSafeRelease(keyStr);
	keyStr = [value retain];
}

+ (OFService*)getService;
{
	return [OFCloudStorageService sharedInstance];
}




+ (NSString*)getResourceName
{
	//return @"cloud_storage_blob";
	return @"cloud_store";
}


+ (NSString*)getResourceDiscoveredNotification
{
	return @"openfeint_cloud_storage_blob_discovered";
}


- (void) dealloc
{
	self.userId = nil;
	self.keyStr = nil;
	
	[super dealloc];
}


+ (NSDictionary*)dataDictionary
{
    static NSDictionary*sDataDictionary = nil;
    if(!sDataDictionary)
    {
        sDataDictionary = [[NSDictionary dictionaryWithObjectsAndKeys:
[OFResourceField fieldSetter:@selector(setUserId:)], @"user_id",
[OFResourceField fieldSetter:@selector(setKeyStr:)], @"key",
        nil] retain];
    }
    return sDataDictionary;
}
@end
