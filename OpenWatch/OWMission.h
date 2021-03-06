//
//  OWMission.h
//  OpenWatch
//
//  Created by Christopher Ballinger on 5/28/13.
//  Copyright (c) 2013 The OpenWatch Corporation, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>
#import "_OWMission.h"
#import <CoreLocation/CoreLocation.h>

@interface OWMission : _OWMission

- (CLLocationCoordinate2D) coordinate;

- (NSURL*) mediaURL;
+ (void) updateUnreadCount;

@end
