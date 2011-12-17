//  Copyright 2011 Aurora Feint, Inc.
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
#import "OFInviteService+BackwardsCompatibility.h"
@implementation OFInviteService (BackwardsCompatibility)
+ (OFRequestHandle*)getDefaultInviteDefinitionForApplication:(const OFDelegate&)onSuccess onFailure:(const OFDelegate&)onFailure
{
    return [self getDefaultInviteDefinitionForApplicationInvocation:onSuccess.getInvocation() 
                                                onFailureInvocation:onFailure.getInvocation()];
}
+ (OFRequestHandle*)getInviteDefinition:(NSString*)inviteIdentifier onSuccess:(const OFDelegate&)onSuccess onFailure:(const OFDelegate&)onFailure
{
    return [self getInviteDefinition:inviteIdentifier onSuccessInvocation:onSuccess.getInvocation() 
                 onFailureInvocation:onFailure.getInvocation()];
}
+ (OFRequestHandle*)sendInvite:(OFInviteDefinition*)inviteDefinition withMessage:(NSString*)userMessage toUsers:(NSArray*)users onSuccess:(const OFDelegate&)onSuccess onFailure:(const OFDelegate&)onFailure
{
    return [self sendInvite:inviteDefinition withMessage:userMessage toUsers:users
        onSuccessInvocation:onSuccess.getInvocation() 
        onFailureInvocation:onFailure.getInvocation()];
}
+ (void)getInvitesForUser:(OFUser*)user pageIndex:(unsigned int)pageIndex onSuccess:(const OFDelegate&)onSuccess onFailure:(const OFDelegate&)onFailure
{
    [self getInvitesForUser:user pageIndex:pageIndex 
        onSuccessInvocation:onSuccess.getInvocation() 
        onFailureInvocation:onFailure.getInvocation()];
}
+ (void)ignoreInvite:(NSString*)inviteResourceId onSuccess:(const OFDelegate&)onSuccess onFailure:(const OFDelegate&)onFailure
{
    [self ignoreInvite:inviteResourceId 
   onSuccessInvocation:onSuccess.getInvocation() 
   onFailureInvocation:onFailure.getInvocation()];
}

@end
