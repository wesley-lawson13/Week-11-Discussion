APP = university_db
FLAGS = -Wall

${APP} : person.cpp student.cpp professor.cpp department.cpp	
	g++ ${FLAGS} $^ -o $@

clean:
	rm -f ${APP}

