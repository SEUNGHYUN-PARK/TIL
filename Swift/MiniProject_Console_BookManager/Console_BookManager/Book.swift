//
//  Book.swift
//  Console_BookManager
//
//  Created by 박승현 on 2018. 5. 22..
//  Copyright © 2018년 박승현. All rights reserved.
//

struct Book {
    var name:String?
    var genre:String?
    var author:String?
    
    func bookPrint()
    {
        print("Name : \(name!)")
        print("Genre : \(genre!)")
        print("Author : \(author!)")
        print("----------------------")
    }
}
