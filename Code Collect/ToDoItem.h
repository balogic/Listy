//
//  ToDoItem.h
//  Code Collect
//
//  Created by Balaji Ravichandran on 27/07/15.
//  Copyright (c) 2015 Balaji Ravichandran. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ToDoItem : NSObject

@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;


@end
