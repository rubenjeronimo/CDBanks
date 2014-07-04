//
//  FailedBankInfo.h
//  CoreDataRayWenderlich
//
//  Created by Ruben Jeronimo Fernandez on 04/07/14.
//  Copyright (c) 2014 IronHack. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class FailedBankDetails;

@interface FailedBankInfo : NSManagedObject

@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) NSString * ciudad;
@property (nonatomic, retain) NSString * estado;
@property (nonatomic, retain) FailedBankDetails *details;

@end
