//
//  OWUser.h
//  OpenWatch
//
//  Created by Christopher Ballinger on 12/3/12.
//  Copyright (c) 2012 OpenWatch FPC. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class OWManagedRecording;

@interface OWUser : NSManagedObject

@property (nonatomic, retain) NSString * username;
@property (nonatomic, retain) NSNumber * serverID;
@property (nonatomic, retain) NSSet *recordings;

@end

@interface OWUser (CoreDataGeneratedAccessors)

- (void)addRecordingsObject:(OWManagedRecording *)value;
- (void)removeRecordingsObject:(OWManagedRecording *)value;
- (void)addRecordings:(NSSet *)values;
- (void)removeRecordings:(NSSet *)values;

@end
