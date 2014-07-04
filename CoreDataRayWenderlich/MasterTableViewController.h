//
//  MasterTableViewController.h
//  CoreDataRayWenderlich
//
//  Created by Ruben Jeronimo Fernandez on 04/07/14.
//  Copyright (c) 2014 IronHack. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MasterTableViewController : UITableViewController
@property (nonatomic,strong) NSManagedObjectContext *contexto;
@property (nonatomic,strong) NSArray *listadoBancos;
@end
